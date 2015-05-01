#include "actionhandlers.h"
#include "standardactions.h"
#include "appwindow.h"

ActionHandlers::ActionHandlers(StandardActions *standardActions)
    : QObject(standardActions)
{
    m_standardActions = standardActions;
}

ActionHandlers::~ActionHandlers()
{

}

StandardActions* ActionHandlers::standardActions()
{
    return m_standardActions;
}

void ActionHandlers::slotBack()
{

}

void ActionHandlers::slotForward()
{

}

void ActionHandlers::slotLoad()
{

}

void ActionHandlers::slotExit()
{
    m_standardActions->appWindow()->close();
}
