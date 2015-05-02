#ifndef URLBAR_H
#define URLBAR_H

#include <QLineEdit>
#include <QUrl>

class AppBar;

class UrlBar : public QLineEdit
{
    Q_OBJECT
public:
    UrlBar(AppBar* appBar = 0);
    ~UrlBar();

    AppBar* appBar();

signals:
    void sigUrlEntered(QString);

public slots:
    void slotSetUrl(QUrl url);

private slots:
    void slotUrlEntered();

private:
    AppBar* m_appBar;
};

#endif // URLBAR_H
