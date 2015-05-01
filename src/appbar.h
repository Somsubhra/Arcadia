#ifndef APPBAR_H
#define APPBAR_H

#include "urlbar.h"

#include <QWidget>

class AppWindow;

class AppBar : public QWidget
{
    Q_OBJECT
public:
    explicit AppBar(AppWindow *appWindow = 0);
    ~AppBar();

    AppWindow* appWindow();
    UrlBar* urlBar();

signals:

public slots:

private:
    AppWindow* m_appWindow;
    UrlBar* m_urlBar;
};

#endif // APPBAR_H
