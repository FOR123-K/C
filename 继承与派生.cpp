#include  <iostream> 
using  namespace  std; 
const  int  pi=3.14159;
 
class Shape
{
	public:
		Shape(int i){m_ID=i;cout<<"Shape constructor called:"<<i<<endl;}
		int getArea(){return 0;}
		~Shape(){cout<<"Shape destructor called:"<<m_ID<<endl;}
	private:
		int m_ID;
};
class Circle:public Shape
{
	public:
		Circle(int x,int y):Shape(y){r=x;id=y;cout<<"Circle constructor called:"<<y<<endl;}
		int getArea(){return pi*r*r;}
		~Circle(){cout<<"Circle destructor called:"<<id<<endl;}
	private:
		int r,id;
};
class Rectangle:public Shape
{
	public:
		Rectangle(int m,int n,int p):Shape(p){h=m;w=n;id=p;cout<<"Rectangle constructor called:"<<p<<endl;}
		int getArea(){return h*w;}
		~Rectangle(){cout<<"Rectangle destructor called:"<<id<<endl;}
 	private:
 		int h,w,id;
};
int  main() 
{ 
        Shape  s(1);//1��ʾID 
        Circle  c(4,2);//4��ʾ�뾶��2��ʾID 
        Rectangle  r(4,5,3);//4��5��ʾ���Ϳ�3��ʾID 
        cout<<"Shape�����"<<s.getArea()<<endl; 
        cout<<"Circle�����"<<c.getArea()<<endl; 
        cout<<"Rectangle�����"<<r.getArea()<<endl; 
}
