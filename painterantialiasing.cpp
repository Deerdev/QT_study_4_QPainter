#include "painterantialiasing.h"
#include <QPainter>

/***********
 *反走样示例*
 ***********/

painterAntialiasing::painterAntialiasing(QWidget *parent) :
    QWidget(parent)
{
    resize(800,600);
    setWindowTitle(tr("Paint Demo2"));
}

void painterAntialiasing::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    /*第一个参数是画笔颜色，这里设置为黑色；第二个参数是画笔的粗细，这里是5px；
     * 第三个是画笔样式，我们使用了DashDotLine，正如同其名字所示，是一个短线
     * 和一个点相间的类型；第四个是RoundCap，也就是圆形笔帽。然后我们使用一个
     * 黄色的画刷填充，画了一个椭圆。
     */
    painter.setPen(QPen(Qt::black, 5, Qt::DashDotLine, Qt::RoundCap));
    painter.setBrush(Qt::yellow);
    painter.drawEllipse(50, 150, 400, 450);

    /*反走样是图形学中的重要概念，用以防止“锯齿”现象的出现
     * 设置Antialiasing属性为true
     * 画出的线条非常圆润
     */
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(QPen(Qt::black, 5, Qt::DashDotLine, Qt::RoundCap));
    painter.setBrush(Qt::yellow);
    painter.drawEllipse(600, 150, 400, 450);
}

painterAntialiasing::~painterAntialiasing()
{

}
