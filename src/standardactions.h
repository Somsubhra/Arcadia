#ifndef STANDARDACTIONS_H
#define STANDARDACTIONS_H

#include "actionhandlers.h"

#include <QObject>

class AppWindow;

class StandardActions : public QObject
{
    Q_OBJECT
public:
    explicit StandardActions(AppWindow *appWindow = 0);
    ~StandardActions();

    void createStandardActions();

    AppWindow* appWindow();

    ActionHandlers* actionHandlers();

signals:

public slots:

private:
    AppWindow* m_appWindow;
    ActionHandlers* m_actionHandlers;
};

#endif // STANDARDACTIONS_H
