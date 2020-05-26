#include  <iostream> 
using  namespace  std; 
class Complex
{
	public:
		Complex(double x=0,double y=0){real=x;imag=y;}
		Complex operator+(Complex c1);
		Complex operator-(Complex c2);
		Complex operator+(int i);
		Complex operator-(float j);
		void print()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
	private:
		double real,imag;	
};
Complex Complex::operator+(Complex c1)
{
	Complex c;
	c.real=c1.real+real;
	c.imag=c1.imag+imag;
	return Complex(c.real,c.imag);
}
Complex Complex::operator-(Complex c2)
{
	Complex c;
	c.real=real-c2.real;
	c.imag=imag-c2.imag;
	return Complex(c.real,c.imag);
}
Complex Complex::operator+(int i)
{
	Complex c;
	c.real=real+i;
	c.imag=imag;
	return Complex(c.real,c.imag);
}
Complex Complex::operator-(float j)
{
	Complex c;
	c.real=real-j;
	c.imag=imag;
	return Complex(c.real,c.imag);
}

int  main() 
{ 
        Complex  a(3,4),b(1,-1),c; 
        c=a+b; 
        cout<<"a+b="; 
        c.print(); 
        cout<<endl; 
        c=a-b; 
        cout<<"a-b="; 
        c.print(); 
        cout<<endl; 
        c=a+100; 
        cout<<"a+100="; 
        c.print(); 
        cout<<endl; 
        c=a-2.5; 
        cout<<"a-2.5="; 
        c.print(); 
        cout<<endl; 

        return  0; 
} 
