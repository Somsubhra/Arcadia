#include "standardactions.h"
#include "appwindow.h"

#include <QStyle>

StandardActions::StandardActions(AppWindow *appWindow)
    : QObject(appWindow)
{
    m_appWindow = appWindow;
    m_actionHandlers = new ActionHandlers(this);
}

StandardActions::~StandardActions()
{
    delete m_actionHandlers;
    m_actionHandlers = 0;
}

AppWindow* StandardActions::appWindow()
{
    return m_appWindow;
}

ActionHandlers* StandardActions::actionHandlers()
{
    return m_actionHandlers;
}

void StandardActions::createStandardActions()
{
    QAction* backAction = new QAction(m_appWindow->style()->standardIcon(QStyle::SP_ArrowBack),
                                      tr("Back"), m_appWindow);
    m_appWindow->actionCollection()->addAction("back", backAction);
    connect(backAction, SIGNAL(triggered()), m_actionHandlers, SLOT(slotBack()));

    QAction* forwardAction = new QAction(m_appWindow->style()->standardIcon(QStyle::SP_ArrowForward),
                                         tr("Forward"), m_appWindow);
    m_appWindow->actionCollection()->addAction("forward", forwardAction);
    connect(forwardAction, SIGNAL(triggered()), m_actionHandlers, SLOT(slotForward()));

    QAction* loadAction = new QAction(m_appWindow->style()->standardIcon(QStyle::SP_BrowserReload),
                                      tr("Reload"), m_appWindow);
    m_appWindow->actionCollection()->addAction("load", loadAction);
    connect(loadAction, SIGNAL(triggered()), m_actionHandlers, SLOT(slotLoad()));

    QAction* exitAction = new QAction(tr("Exit"), m_appWindow);
    exitAction->setShortcut(QKeySequence("Ctrl+Q"));
    m_appWindow->actionCollection()->addAction("exit", exitAction);
    connect(exitAction, SIGNAL(triggered()), m_actionHandlers, SLOT(slotExit()));
}
