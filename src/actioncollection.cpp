#include "actioncollection.h"

#include "appwindow.h"

ActionCollection::ActionCollection(AppWindow *appWindow)
    : QObject(appWindow)
{
    m_appWindow = appWindow;
    m_actions = new QHash<QString, QAction*>();
}

ActionCollection::~ActionCollection()
{
    delete m_actions;
    m_actions = 0;
}

AppWindow* ActionCollection::appWindow()
{
    return m_appWindow;
}

void ActionCollection::addAction(QString key, QAction *action)
{
    m_actions->insert(key, action);
}

QAction* ActionCollection::action(QString key)
{
    if(m_actions->contains(key)) {
        return m_actions->value(key);
    } else {
        return 0;
    }
}
