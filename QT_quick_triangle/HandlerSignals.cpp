#include "HandlerSignals.h"

HandlerSignals::HandlerSignals()
{

}

void HandlerSignals::on_button_Clicked(const QString &msg)
{
      QObject* field1 = this->parent()->findChild<QObject*>("field1");
      QObject* field2 = this->parent()->findChild<QObject*>("field2");
      QObject* field3 = this->parent()->findChild<QObject*>("field3");
      QObject* field4 = this->parent()->findChild<QObject*>("field4");
      QObject* field5 = this->parent()->findChild<QObject*>("field5");
      QObject* field6 = this->parent()->findChild<QObject*>("field6");

      QObject* textArea = this->parent()->findChild<QObject*>("textArea");

      QString str1 = (field1->property("text")).toString();
      QString str2 = (field2->property("text")).toString();
      QString str3 = (field3->property("text")).toString();
      QString str4 = (field4->property("text")).toString();
      QString str5 = (field5->property("text")).toString();
      QString str6 = (field6->property("text")).toString();

      double x1, x2, x3, y1, y2, y3, s;

      x1 = str1.toInt();
      x2 = str2.toInt();
      x3 = str3.toInt();
      y1 = str4.toInt();
      y2 = str5.toInt();
      y3 = str6.toInt();

      s = fabs((x2-x1)*(y3-y1) - (x3-x1)*(y2-y1))/2.0;

      QString strResult = QString::number(s);
      textArea->setProperty("текст", strResult + " " + msg); //не совсем понимаю как вывести результат программы, если честно :(

}
