/**
 * @file    main.cpp
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Diciembre, 2014
 * @brief
 *
 * @section DESCRIPTION
 * @details
 *
 */
#include <QApplication>
//#include "mainwindow.h"

// Chapter 1. Getting Started
#include <QLabel>

#include <QPushButton>

#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

void chapter01 (QApplication &a);
void chapter02 (QApplication &a);

int main(int argc, char *argv[]) {
   QApplication a(argc, argv);

   chapter01 (a);

// ------ Creado por QT Creator ---------
   //MainWindow w;
   //w.show();
   
   return a.exec();
}

void chapter01 (QApplication &a) {
   // ++++++ Chapter 1. Getting Started +++++++
   // ------ Hello QT (Inicio)------------
      // - Uso básico de un QLabel
      // -> QLabel *label = new QLabel("Hello Qt!");

      // - Uso del formato Html en el string del QLabel.
      // -> QLabel *label = new QLabel("<h2><i>Hello</i> " "<font color=red>Qt!</font></h2>");

      // -> label->show();
   // ------ Hello QT (fin)------------

   // ------ Making Connections (Inicio)------------
      // -> QPushButton *button = new QPushButton("Quit");
      // - Conectar la señal "Clicked" del botón al slot "Quit" del programa QT.
      // -> QObject::connect(button, SIGNAL(clicked()), &a, SLOT(quit()));
      // -> button->show();
   // ------ Making Connections (fin)------------

   // ------ Laying Out Widgets (Inicio) ------
      // - Crear una ventana de tipo QWidget
      // -> QWidget *window = new QWidget;
      // -> window->setWindowTitle("Enter Your Age");


      // -> QSpinBox *spinBox = new QSpinBox;
      // -> QSlider *slider = new QSlider(Qt::Horizontal);
      // -> spinBox->setRange(0, 130);
      // -> slider->setRange(0, 130);
      // - conectar el spinBox y el slider entre ellos para que cada uno modifique al otro.
      // -> QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
      // -> QObject::connect(slider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
      // -> spinBox->setValue(35);

      // - Crear un layout horizontal para contener el spinBox y el slider
      // -> QHBoxLayout *layout = new QHBoxLayout;
      // -> layout->addWidget(spinBox);
      // -> layout->addWidget(slider);
      // - Establecer el layout creado en la ventana creada y mostrarla
      // -> window->setLayout(layout);
      // -> window->show();
   // ------ Laying Out Widgets (fin) ------

   // ------ Uniendo conceptos (Inicio) -------
      // - Crear una ventana de tipo Qwidget
      QWidget *window = new QWidget;
      window->setWindowTitle("Uniendo conceptos.");

      // - Creando un boton que salga del programa
      QPushButton *button = new QPushButton("Quit");
      QObject::connect(button, SIGNAL(clicked()), &a, SLOT(quit()));

      // - Creando un Qlabel de bienvenida.
      QLabel *label = new QLabel("<h2><i>Qt Tutorial:</i> " "<font color=red> Capitulo 1</font></h2>");

      // - Creando el spinbox y el slider interconectados
      QSpinBox *spinBox = new QSpinBox;
      QSlider *slider = new QSlider(Qt::Horizontal);
      spinBox->setRange(0, 130);
      slider->setRange(0, 130);
      QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
      QObject::connect(slider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
      spinBox->setValue(35);
      QHBoxLayout *layout01 = new QHBoxLayout;
      layout01->addWidget(spinBox);
      layout01->addWidget(slider);

      // - Creando el layout a introducir en la ventana a mostrar
      QVBoxLayout *layoutM = new QVBoxLayout;
      layoutM -> addWidget(label);
      layoutM -> addLayout(layout01);
      layoutM -> addWidget(button);

      // - Introducir todo en la ventana
      window->setLayout(layoutM);
      window->show();
   // ------ Uniendo conceptos (fin) -------

}

void chapter02 (QApplication &a) {
   // ++++++ Chapter 2. Creating Dialogs +++++++
}
