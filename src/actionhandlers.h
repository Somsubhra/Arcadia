#ifndef ACTIONHANDLERS_H
#define ACTIONHANDLERS_H

#include <QObject>

class StandardActions;

class ActionHandlers : public QObject
{
    Q_OBJECT
public:
    explicit ActionHandlers(StandardActions* standardActions = 0);
    ~ActionHandlers();

    StandardActions* standardActions();

signals:

public slots:
    void slotExit();
    void slotLoad();
    void slotBack();
    void slotForward();

private:
    StandardActions* m_standardActions;
};

#endif // ACTIONHANDLERS_H
