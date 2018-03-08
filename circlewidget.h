#ifndef CIRCLEWIDGET_H
#define CIRCLEWIDGET_H

#include <QMainWindow>

namespace Ui {
class CircleWidget;
}

class CircleWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit CircleWidget(QWidget *parent = 0);
    ~CircleWidget();

private slots:
    void on_btnGo_clicked();

private:
    Ui::CircleWidget *ui;
    double CalcCircumference(double radius);
    double CalcArea(double radius);
};

#endif // CIRCLEWIDGET_H
