#ifndef PAINTERANTIALIASING_H
#define PAINTERANTIALIASING_H

#include <QWidget>

namespace Ui {
class painterAntialiasing;
}

class painterAntialiasing : public QWidget
{
    Q_OBJECT

public:
    explicit painterAntialiasing(QWidget *parent = 0);
    ~painterAntialiasing();
protected:
    void paintEvent(QPaintEvent *event);


};

#endif // PAINTERANTIALIASING_H
