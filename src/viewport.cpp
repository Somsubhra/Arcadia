#include "viewport.h"
#include "appwindow.h"

ViewPort::ViewPort(AppWindow *appWindow)
    : QWebEngineView(appWindow)
{
    m_appWindow = appWindow;
    setHtml("<h1>Arcadia</h1>");
}

ViewPort::~ViewPort()
{

}

AppWindow* ViewPort::appWindow()
{
    return m_appWindow;
}
