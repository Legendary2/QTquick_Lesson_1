#include "HandlerSignals.h"

HandlerSignals::HandlerSignals()
{

}

void HandlerSignals::on_button_Clicked(const QString &msg)
{
      QObject* field1 = this->parent()->findChild<QObject*>("field1");
      QObject* field2 = this->parent()->findChild<QObject*>("field2");
      QObject* field3 = this->parent()->findChild<QObject*>("field3");

      QObject* textArea = this->parent()->findChild<QObject*>("textArea");

      QString str1 = (field1->property("text")).toString();
      QString str2 = (field2->property("text")).toString();
      QString str3 = (field3->property("text")).toString();

      int a, b, c;
      float p, s;

      a = str1.toInt();
      b = str2.toInt();
      c = str3.toInt();

      p = a + b + c / 2;
      s=sqrt(p*(p-a)*(p-b)*(p-c));

      QString strResult = QString::number(s);
      textArea->setProperty("текст", strResult + " " + msg); //не совсем понимаю как вывести результат программы, если честно :(
}
