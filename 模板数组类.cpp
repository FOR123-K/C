#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

template <typename T>
class Array
{
public:
    Array(double num)
    {vector<double>a(num);}
public:void input(int n) 
	{for(int i=0;i<n;i++)cin >> a[i];}
public:T &operator [](int y){return a[y];}
private:
	T*a;
};
class Fract
{public:
	Fract(){}
    Fract(int n1,int m1):m(m1),n(n1)
    {int t=0;
     if(m*n<0)t=0;m=fabs(m);n=fabs(n); 
     int a=m>n ? n:m;
     for(int i=a;i>=2;i--)
	 {if((m%i==0)&&(n%i==0))
	 {m=m/i;n=n/i;}}
     if(t)n=-n;}
	void show()
	{if(m==1||n==0)cout<<n<<endl;
	 else cout<<n<<"/"<<m<<endl;}
	Fract operator+=(const Fract&p)
	 {int m1,n1;m1=m*p.m;n1=n*p.m+p.n*m;
	  Fract *q;q=new Fract(n1,m1);n=q->getn();m=q->getm();
	  delete q;return*this;}
	 friend ostream &operator<<(ostream&os,const Fract &p);
	 friend istream &operator>>(istream&is,Fract &p)
	 {is>>p.n>>p.m;return is;}
	 int getn() const{return n;}
	 int getm() const{return m;}
private: int m,n;
};


int main()
{
    unsigned int n;
    cin >> n;
    Array<double> db(n);
    db.input(n);
    double dbsum(0.0);
    for (unsigned int i = 0; i < n; i++)
        dbsum += db[i];
    cout << dbsum << endl;
    cin >> n;
    Array<Fract> fr(n);
    fr.input(n);
    Fract frsum(0, 1);
    for (unsigned int i = 0; i < n; i++)
        frsum += fr[i];
    frsum.show();
}
