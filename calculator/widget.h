#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    Ui::Widget *ui;
private slots:
   void  calSlot();
   void  calSlot2();
   void  calSlot3();
   void  calSlot4();
   void on_radioButton_clicked();
   void on_radioButton_2_clicked();
   void on_radioButton_3_clicked();
   void on_radioButton_4_clicked();
};
#endif // WIDGET_H
