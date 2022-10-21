#ifndef HANDLERSIGNALS_H
#define HANDLERSIGNALS_H

#include <QObject>
#include <QVariant>

class HandlerSignals : public QObject
{
    Q_OBJECT
public:
   explicit HandlerSignals();

signals:

public slots:
  void on_button_Clicked (const QString &msg);
};

#endif // HANDLERSIGNALS_H
