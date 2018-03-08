#include "circlewidget.h"
#include "ui_circlewidget.h"

const double pi = 3.1415;

CircleWidget::CircleWidget(QWidget *parent) : QMainWindow(parent), ui(new Ui::CircleWidget)
{
    ui->setupUi(this);
}

CircleWidget::~CircleWidget()
{
    delete ui;
}

double CircleWidget::CalcCircumference(double radius)
{
    return 2 * pi * radius;
}

double CircleWidget::CalcArea(double radius)
{
    return radius * radius * pi;
}

void CircleWidget::on_btnGo_clicked()
{
    QString strRad = ui->txtRadius->text();
    double dblRad = strRad.toDouble();

    double circumference = CalcCircumference(dblRad);
    double area = CalcArea(dblRad);

    QString outCirc = "Circumference: " + QString::number(circumference);
    QString outArea = "Area: " + QString::number(area);

    ui->lblCircumference->setText(outCirc);
    ui->lblArea->setText(outArea);
}
