#ifndef VIEWPORT_H
#define VIEWPORT_H

#include <QWebEngineView>

class AppWindow;

class ViewPort : public QWebEngineView
{
    Q_OBJECT
public:
    ViewPort(AppWindow* appWindow);
    ~ViewPort();

    AppWindow* appWindow();

public slots:
    void slotLoadUrl(QString url);

private:
    AppWindow* m_appWindow;
};

#endif // VIEWPORT_H
