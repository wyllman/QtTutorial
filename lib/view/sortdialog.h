/**
 * @file    sortdialog.h
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Diciembre, 2014
 * @brief
 *
 * @section DESCRIPTION
 * @details
 *
 */
#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>
#include "ui_sortdialog.h"

class SortDialog : public QDialog, public Ui::SortDialog {
      Q_OBJECT
   public:
      explicit SortDialog(QWidget *parent = 0);
      void setColumnRange(QChar first, QChar last);
      
   signals:
      
   public slots:
      
};

#endif // SORTDIALOG_H
