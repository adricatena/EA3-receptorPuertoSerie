#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <qextserialport.h>
#include <QextSerialEnumerator.h>
#include "portcfg.h"
#include "ui_portcfg.h"
#include <QDateTime>

void VentanaPrincipal::DatosRecibidos()
{
   QByteArray lectura;
   while(puertoSerie->bytesAvailable())
   {
       lectura.resize(puertoSerie->bytesAvailable());
       lectura = puertoSerie->read(puertoSerie->bytesAvailable());
   }
   for(int i=0; i<lectura.size(); i++)
   {
       if(lectura[i]=='h')
       {
           e++;
           inicio=0;
           numero=0;
       }
       /*else if(lectura[i]=='f' && e>=1)
       {
           inicio=1;
           e=0;
           numero=0;
       }*/
       else if(lectura[i]!='h' && e>=2 && numero<8)
       {
           DNI[numero]=lectura[i];
           numero++;
       }
       /*else if(lectura[i]=='g' && numero>=7)
       {
           inicio=0;
           procesar();
           numero=0;
           e=0;
       }*/
       else if(numero>=7)
       {
           inicio=0;
           procesar();
           numero=0;
           e=0;
       }
   }
}

void VentanaPrincipal::procesar()
{
    QDateTime fecha = QDateTime::currentDateTime();
    QTextStream txt(&Archivo);
    txt << "DNI: " << DNI << "  -  Fecha: " << fecha.toString() << endl;
    ui->labDNI->setText(DNI);
}

VentanaPrincipal::VentanaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);
    e = 0;
    inicio = 0;
    cadena = 0;
    numero = 0;
    cantidad=0;
    puertoSerie = new QextSerialPort();
    puertoSerie->setBaudRate(BAUD9600);
    puertoSerie->setDataBits(DATA_8);
    puertoSerie->setFlowControl(FLOW_OFF);
    puertoSerie->setParity(PAR_NONE);
    puertoSerie->setStopBits(STOP_2);
    connect(puertoSerie, SIGNAL(readyRead()), this, SLOT(DatosRecibidos()));
}

VentanaPrincipal::~VentanaPrincipal()
{
    disconnect(puertoSerie, SIGNAL(readyRead()), this, SLOT(DatosRecibidos()));
    if (puertoSerie->isOpen())
        puertoSerie->close();
    delete puertoSerie;
    Archivo.close();
    delete ui;
}

void VentanaPrincipal::on_btnConectar_clicked()
{
    QString NombreArchivo = QFileDialog::getSaveFileName(this, "Archivo de destino", QApplication::applicationDirPath(),
                                                         "Archivos de texto (*.txt)");
    if (NombreArchivo != NULL)
    {
        Archivo.setFileName(NombreArchivo);
        Archivo.open(QIODevice::WriteOnly | QIODevice::Text);
    }
    else
    {
        QMessageBox msg(this);
        msg.setText("No se ha indicado cuál es el nombre del archivo de datos o el nombre del archivo de salida.");
        msg.setWindowTitle("Error!");
        msg.setIcon(QMessageBox::Information);
        msg.exec();
    }
    portCfg cfg(this);
    if (puertoSerie->isOpen())
        puertoSerie->close();
    QList<QextPortInfo> puertos = QextSerialEnumerator::getPorts();
    foreach( QextPortInfo unPuerto, puertos )
    {
        cfg.ui->cmbPuertos->addItem(unPuerto.portName);
    }
    if(cfg.exec())
    {
       puertoSerie->setPortName(cfg.ui->cmbPuertos->currentText());
       puertoSerie->open(QIODevice::ReadOnly);
    }
    if(puertoSerie->isOpen())
      ui->labEstado->setText("Conectado");
    else
      ui->labEstado->setText("Desconectado");
}

void VentanaPrincipal::on_btnSalir_clicked()
{
    close();
}
