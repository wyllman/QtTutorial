/**
 * @file    finddialog.cpp
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Diciembre, 2014
 * @brief
 *
 * @section DESCRIPTION
 * @details
 *
 */
#include <QtGui>
#include "lib/view/finddialog.h"

FindDialog::FindDialog(QWidget *parent) :
   QDialog(parent) {

   // Crear los objetos graficos internos de la ventana
   label = new QLabel(tr("Find &what:"));
   lineEdit = new QLineEdit;
   label->setBuddy(lineEdit);
   caseCheckBox = new QCheckBox(tr("Match &case"));
   backwardCheckBox = new QCheckBox(tr("Search &backward"));
   findButton = new QPushButton(tr("&Find"));
   findButton->setDefault(true);
   findButton->setEnabled(false);
   closeButton = new QPushButton(tr("Close"));

   // Conectar las señales de los botones y la entrada de texto con sus slots correspondientes
   connect(lineEdit, SIGNAL(textChanged(const QString &)), this, SLOT(enableFindButton(const QString &)));
   connect(findButton, SIGNAL(clicked()), this, SLOT(findClicked()));
   connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

   // Distribuir los objetos en distintos layouts para tenerlos ordenados dentro del espacio
   // de trabajo de la ventana.
   QHBoxLayout *topLeftLayout = new QHBoxLayout;
   topLeftLayout->addWidget(label);
   topLeftLayout->addWidget(lineEdit);
   QVBoxLayout *leftLayout = new QVBoxLayout;
   leftLayout->addLayout(topLeftLayout);
   leftLayout->addWidget(caseCheckBox);
   leftLayout->addWidget(backwardCheckBox);
   QVBoxLayout *rightLayout = new QVBoxLayout;
   rightLayout->addWidget(findButton);
   rightLayout->addWidget(closeButton);
   rightLayout->addStretch();
   QHBoxLayout *mainLayout = new QHBoxLayout;
   mainLayout->addLayout(leftLayout);
   mainLayout->addLayout(rightLayout);
   setLayout(mainLayout);

   // Establecer las propiedades de la ventana.
   setWindowTitle(tr("Find"));
   setFixedHeight(sizeHint().height());
}

void FindDialog::findClicked() {
   // Si el checkBox esta activado se emite una señal, sino se emite otra.
   QString text = lineEdit->text();
   Qt::CaseSensitivity cs =
         caseCheckBox->isChecked() ? Qt::CaseSensitive
                                   : Qt::CaseInsensitive;
   if (backwardCheckBox->isChecked()) {
      emit findPrevious(text, cs);
   } else {
      emit findNext(text, cs);
   }
}

void FindDialog::enableFindButton(const QString &text) {
   findButton->setEnabled(!text.isEmpty());
}
