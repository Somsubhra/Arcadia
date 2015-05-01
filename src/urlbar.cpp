#include "urlbar.h"
#include "appbar.h"
#include "appwindow.h"
#include "viewport.h"

UrlBar::UrlBar(AppBar *appBar)
    : QLineEdit(appBar)
{
    m_appBar = appBar;

    setPlaceholderText("Enter URL or Search terms");
    connect(this, SIGNAL(returnPressed()), this, SLOT(slotUrlEntered()));
}

UrlBar::~UrlBar()
{

}

AppBar* UrlBar::appBar()
{
    return m_appBar;
}

void UrlBar::slotUrlEntered()
{
    emit sigUrlEntered();
    m_appBar->appWindow()->viewPort()->slotLoadUrl(text());
}
