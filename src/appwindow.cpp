#include "appwindow.h"

AppWindow::AppWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Arcardia");
    setWindowState(Qt::WindowMaximized);

    m_viewPort = new ViewPort(this);
    setCentralWidget(m_viewPort);
}

AppWindow::~AppWindow()
{
    delete m_viewPort;
    m_viewPort = 0;
}

ViewPort* AppWindow::viewPort()
{
    return m_viewPort;
}
