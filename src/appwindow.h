#ifndef APPWINDOW_H
#define APPWINDOW_H

#include "viewport.h"
#include "appbar.h"
#include "actioncollection.h"
#include "standardactions.h"

#include <QMainWindow>

class AppWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit AppWindow(QWidget *parent = 0);
    ~AppWindow();

    ViewPort* viewPort();
    AppBar* appBar();

    ActionCollection* actionCollection();
    StandardActions* standardActions();

signals:

public slots:

private:
    void setupConnections();

private:
    ViewPort* m_viewPort;
    AppBar* m_appBar;

    ActionCollection* m_actionCollection;
    StandardActions* m_standardActions;
};

#endif // APPWINDOW_H
