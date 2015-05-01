#include "appbar.h"
#include "appwindow.h"

#include <QLineEdit>
#include <QGridLayout>
#include <QToolBar>

AppBar::AppBar(AppWindow *appWindow)
    : QWidget(appWindow)
{
    m_appWindow = appWindow;

    QGridLayout* mainLayout = new QGridLayout(this);

    QToolBar* browserControlsBar = new QToolBar(this);
    browserControlsBar->addAction(m_appWindow->actionCollection()->action("back"));
    browserControlsBar->addAction(m_appWindow->actionCollection()->action("forward"));
    browserControlsBar->addAction(m_appWindow->actionCollection()->action("load"));

    mainLayout->addWidget(browserControlsBar, 0, 0);

    m_urlBar = new UrlBar(this);
    mainLayout->addWidget(m_urlBar, 0, 1);

    QToolBar* menuBar = new QToolBar(this);
    menuBar->addAction(m_appWindow->actionCollection()->action("menu"));

    mainLayout->addWidget(menuBar, 0, 2);

    setLayout(mainLayout);
}

AppBar::~AppBar()
{

}

AppWindow* AppBar::appWindow()
{
    return m_appWindow;
}

UrlBar* AppBar::urlBar()
{
    return m_urlBar;
}
