#ifndef URLBAR_H
#define URLBAR_H

#include <QLineEdit>

class UrlBar : public QLineEdit
{
public:
    UrlBar(QWidget* parent = 0);
    ~UrlBar();
};

#endif // URLBAR_H
