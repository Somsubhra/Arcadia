#include "urlbar.h"

UrlBar::UrlBar(QWidget *parent)
    : QLineEdit(parent)
{
    setPlaceholderText("Enter URL or Search terms");
}

UrlBar::~UrlBar()
{

}

