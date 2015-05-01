#ifndef URLBAR_H
#define URLBAR_H

#include <QLineEdit>

class AppBar;

class UrlBar : public QLineEdit
{
    Q_OBJECT
public:
    UrlBar(AppBar* appBar = 0);
    ~UrlBar();

    AppBar* appBar();

signals:
    void sigUrlEntered();

public slots:
    void slotUrlEntered();

private:
    AppBar* m_appBar;
};

#endif // URLBAR_H
