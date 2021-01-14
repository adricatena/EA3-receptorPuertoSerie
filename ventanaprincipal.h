#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>
#include <QFile>
#include <QString>
#include <qextserialport.h>

namespace Ui {
class VentanaPrincipal;
}

class VentanaPrincipal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit VentanaPrincipal(QWidget *parent = 0);
    ~VentanaPrincipal();
    QextSerialPort * puertoSerie;

public slots:
  void DatosRecibidos();
  void procesar();
    
private slots:
  void on_btnConectar_clicked();

  void on_btnSalir_clicked();

private:
    Ui::VentanaPrincipal *ui;
    QFile Archivo;
    int e, inicio, cadena, numero, cantidad;
    char lectura2;
    QString DNI, DNI2;
};

#endif // VENTANAPRINCIPAL_H
