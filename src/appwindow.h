#ifndef APPWINDOW_H
#define APPWINDOW_H

#include "viewport.h"

#include <QMainWindow>

class AppWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit AppWindow(QWidget *parent = 0);
    ~AppWindow();

    ViewPort* viewPort();

signals:

public slots:

private:
    ViewPort* m_viewPort;
};

#endif // APPWINDOW_H
