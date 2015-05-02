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
    m_standardActions->appWindow()->viewPort()->back();
}

void ActionHandlers::slotForward()
{
    m_standardActions->appWindow()->viewPort()->forward();
}

void ActionHandlers::slotLoad()
{
    m_standardActions->appWindow()->viewPort()->reload();
}

void ActionHandlers::slotExit()
{
    m_standardActions->appWindow()->close();
}
