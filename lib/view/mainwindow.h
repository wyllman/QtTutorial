/**
 * @file    mainwindow.h
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Diciembre, 2014
 * @brief
 *
 * @section DESCRIPTION
 * @details
 *
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
   class MainWindow;
}

class MainWindow : public QMainWindow
{
      Q_OBJECT
      
   public:
      explicit MainWindow(QWidget *parent = 0);
      ~MainWindow();
      
   private:
      Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
