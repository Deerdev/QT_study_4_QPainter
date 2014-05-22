#ifndef PAINTEDWIDGET_H
#define PAINTEDWIDGET_H

#include <QWidget>

class PaintedWidget : public QWidget
{
    Q_OBJECT

public:
    PaintedWidget(QWidget *parent = 0);
    ~PaintedWidget();
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // PAINTEDWIDGET_H
