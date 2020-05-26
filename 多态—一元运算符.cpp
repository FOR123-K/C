#include  <iostream> 
using  namespace  std; 
class Point
{
	public:
		Point(int x=0,int y=0){m_x=x;m_y=y;}
		Point& operator++();
		Point operator++(int);
		friend ostream& operator<<(ostream& a,Point b);
	private:
		int m_x,m_y;
}; 
Point& Point::operator++()
{
	m_x++;m_y++;
	return *this;
}
Point Point::operator++(int)
{
	Point p=*this;
	++(*this);
	return p;
 }
ostream& operator<<(ostream& a,Point b)
{  
    a<<"("<<b.m_x<<","<<b.m_y<<")"<<endl;
    return a;
}
int  main() 
{ 
        Point  a(1,3); 
        cout<<a; 
        cout<<a++; 
        cout<<++a; 
        return  0; 
}
