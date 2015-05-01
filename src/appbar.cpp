#include "appbar.h"
#include "appwindow.h"

#include <QLineEdit>
#include <QGridLayout>

AppBar::AppBar(AppWindow *appWindow)
    : QWidget(appWindow)
{
    m_appWindow = appWindow;

    QGridLayout* mainLayout = new QGridLayout(this);

    m_urlBar = new UrlBar(this);
    mainLayout->addWidget(m_urlBar);

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
