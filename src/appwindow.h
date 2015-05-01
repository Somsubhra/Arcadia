#ifndef APPWINDOW_H
#define APPWINDOW_H

#include "viewport.h"
#include "appbar.h"

#include <QMainWindow>

class AppWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit AppWindow(QWidget *parent = 0);
    ~AppWindow();

    ViewPort* viewPort();
    AppBar* appBar();

signals:

public slots:

private:
    ViewPort* m_viewPort;
    AppBar* m_appBar;
};

#endif // APPWINDOW_H