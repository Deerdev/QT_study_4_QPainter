#include "paintedwidget.h"
#include <QPainter>

/**********************
 *QPainter画图的简单介绍*
 **********************
 */

PaintedWidget::PaintedWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(800,600);
    setWindowTitle(tr("Paint Demo1"));
}

//qt绘图系统提供主要的的参数设置,画笔(pen)、画刷(brush)和字体(font)
void PaintedWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawLine(10,10,650,500);    //画线(x1,y1,x2,y2)
    painter.setPen(Qt::red);            //设置线条笔的颜色
    painter.drawRect(10,10,100,400);    //画矩形(x,y,宽，高),(x,y)left corner
    painter.setPen(QPen(Qt::green,5));  //画轮廓线,设定颜色:绿色5px的轮廓
    painter.setBrush(Qt::blue);         //图形内部的填充颜色
    painter.drawEllipse(10,10,400,200); //椭圆(x,y,宽,高),在矩形中画椭圆,概念同矩形
}

PaintedWidget::~PaintedWidget()
{

}
