#ifndef VIEWPORT_H
#define VIEWPORT_H

#include <QWebEngineView>

class AppWindow;

class ViewPort : public QWebEngineView
{
public:
    ViewPort(AppWindow* appWindow);
    ~ViewPort();

    AppWindow* appWindow();

private:
    AppWindow* m_appWindow;
};

#endif // VIEWPORT_H
