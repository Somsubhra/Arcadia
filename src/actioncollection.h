#ifndef ACTIONCOLLECTION_H
#define ACTIONCOLLECTION_H

#include <QObject>
#include <QHash>
#include <QAction>

class AppWindow;

class ActionCollection : public QObject
{
    Q_OBJECT
public:
    explicit ActionCollection(AppWindow *appWindow = 0);
    ~ActionCollection();

    AppWindow* appWindow();

    void addAction(QString key, QAction* action);
    QAction* action(QString key);

signals:

public slots:

private:
    AppWindow* m_appWindow;
    QHash<QString, QAction*>* m_actions;
};

#endif // ACTIONCOLLECTION_H
