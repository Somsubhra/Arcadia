#include "urlbar.h"
#include "appbar.h"

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

void UrlBar::slotSetUrl(QUrl url)
{
    setText(url.toString());
}

void UrlBar::slotUrlEntered()
{
    emit sigUrlEntered(text());
}
