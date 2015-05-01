#include "appwindow.h"

#include <QGridLayout>

AppWindow::AppWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Arcardia");
    setWindowState(Qt::WindowMaximized);

    m_actionCollection = new ActionCollection(this);

    m_standardActions = new StandardActions(this);
    m_standardActions->createStandardActions();

    m_viewPort = new ViewPort(this);
    m_appBar = new AppBar(this);

    QWidget* mainWidget = new QWidget(this);
    QGridLayout* mainLayout = new QGridLayout(mainWidget);

    mainLayout->addWidget(m_appBar, 0, 0);
    mainLayout->addWidget(m_viewPort, 1, 0);

    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);
}

AppWindow::~AppWindow()
{
    delete m_viewPort;
    m_viewPort = 0;

    delete m_appBar;
    m_appBar = 0;

    delete m_actionCollection;
    m_actionCollection = 0;

    delete m_standardActions;
    m_standardActions = 0;
}

ViewPort* AppWindow::viewPort()
{
    return m_viewPort;
}

AppBar* AppWindow::appBar()
{
    return m_appBar;
}

ActionCollection* AppWindow::actionCollection()
{
    return m_actionCollection;
}

StandardActions* AppWindow::standardActions()
{
    return m_standardActions;
}
