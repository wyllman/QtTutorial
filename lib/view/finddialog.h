/**
 * @file    finddialog.h
 * @author  Wyllman <wyllman@gmail.com>
 * @version 0.0.1
 * @date    Diciembre, 2014
 * @brief
 *
 * @section DESCRIPTION
 * @details
 *
 */
#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog {
      Q_OBJECT
   public:
      explicit FindDialog(QWidget *parent = 0);
      
   signals:
      void findNext(const QString &str, Qt::CaseSensitivity cs);
      void findPrevious(const QString &str, Qt::CaseSensitivity cs);
      
   public slots:

   private slots:
      void findClicked();
      void enableFindButton(const QString &text);

   private:
      QLabel *label;
      QLineEdit *lineEdit;
      QCheckBox *caseCheckBox;
      QCheckBox *backwardCheckBox;
      QPushButton *findButton;
      QPushButton *closeButton;
};

#endif // FINDDIALOG_H
