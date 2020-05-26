#include "widget.h"
#include "ui_widget.h"
#include <math.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->btn_SY,&QPushButton::clicked,[=](){
       ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->btn_ZH,&QPushButton::clicked,[=](){
       ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(calSlot()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(calSlot2()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(calSlot3()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(calSlot4()));
    connect(ui->pushButton_d,&QPushButton::clicked,[=](){
        ui->lineEdit_1->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
        ui->lineEdit_4->clear();
        ui->lineEdit_5->clear();
        ui->lineEdit_s->clear();
        ui->lineEdit_10->clear();
        ui->lineEdit_m->clear();
        ui->lineEdit_17->clear();
        ui->lineEdit_6->clear();
        ui->lineEdit_7->clear();
        ui->lineEdit_8->clear();
        ui->lineEdit_9->clear();
        ui->lineEdit_11->clear();
        ui->lineEdit_12->clear();
        ui->lineEdit_13->clear();
        ui->lineEdit_14->clear();
        ui->lineEdit_15->clear();
        ui->lineEdit_16->clear();
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::calSlot()
{
    double num1,result1,result2,s;float ll; int num2;
    num1=ui->lineEdit_1->text().toDouble();
    num2=ui->lineEdit_2->text().toInt();
    ll=ui->lineEdit_3->text().toFloat();
    s=((ll/1200)*pow(1+ll/1200,num2)/(pow(1+ll/1200,num2)-1))*num1*10000;
    result1=s*num2;
    result2=result1-num1*10000;
    ui->lineEdit_4->setText(QString::number(result2));
    ui->lineEdit_5->setText(QString::number(result1));
    ui->lineEdit_s->setText(QString::number(s));
}
void Widget::calSlot2()
{  double num3,x,y,z,t,result3,result4;float ll2; int num4;
    num3=ui->lineEdit_1->text().toDouble();
    num4=ui->lineEdit_2->text().toInt();
    ll2=ui->lineEdit_3->text().toFloat();
            x=num3*10000/num4;
            y=num3*10000*ll2/1200;
            z=x+y;
            t=x*ll2/1200;
            for(int i=num4;i>0;i--)
            {
                result3=result3+z;
                z=z-t;
            }
            result4=result3-num3*10000;
          ui->lineEdit_10->setText(QString::number(result4));
          ui->lineEdit_17->setText(QString::number(result3));
          ui->lineEdit_m->setText(QString::number(t));
}
void Widget::calSlot3()
{
    double num5,num6,result5,result6;float ll3,ll4;int num7,num8;
    num5=ui->lineEdit_11->text().toDouble();
    num6=ui->lineEdit_14->text().toDouble();
    num7=ui->lineEdit_12->text().toInt();
    num8=ui->lineEdit_15->text().toInt();
    ll3=ui->lineEdit_13->text().toFloat();
    ll4=ui->lineEdit_16->text().toFloat();
    result5=((ll3/1200)*pow(1+ll3/1200,num7)/(pow(1+ll3/1200,num7)-1))*num5*10000*num7
    +((ll4/1200)*pow(1+ll4/1200,num8)/(pow(1+ll4/1200,num8)-1))*num6*10000*num8;
    result6=result5-(num5+num6)*10000;
    ui->lineEdit_6->setText(QString::number(result6));
    ui->lineEdit_7->setText(QString::number(result5));
}
void Widget::calSlot4()
{
    double num9,num10,x1,y1,z1,t1,x2,y2,z2,t2,m=0,n=0,result7,result8;float ll5,ll6; int num11,num12;
        num9=ui->lineEdit_11->text().toDouble();num10=ui->lineEdit_14->text().toDouble();
        num11=ui->lineEdit_12->text().toInt();num12=ui->lineEdit_15->text().toInt();
        ll5=ui->lineEdit_13->text().toFloat(); ll6=ui->lineEdit_16->text().toFloat();
                x1=num9*10000/num11;x2=num10*10000/num12;
                y1=num9*10000*ll5/1200;y2=num10*10000*ll6/1200;
                z1=x1+y1;z2=x2+y2;
                t1=x1*ll5/1200;t2=x2*ll6/1200;
                for(int i=num11;i>0;i--)
                {
                    m=m+z1;
                    z1=z1-t1;
                }
                for(int i=num12;i>0;i--)
                {
                    n=n+z2;
                    z2=z2-t2;
                }
                result7=m+n;result8=result7-(num9+num10)*10000;
              ui->lineEdit_8->setText(QString::number(result8));
              ui->lineEdit_9->setText(QString::number(result7));
}

void Widget::on_radioButton_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void Widget::on_radioButton_2_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}

void Widget::on_radioButton_3_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(0);
}

void Widget::on_radioButton_4_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);
}
