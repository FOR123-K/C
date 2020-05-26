#include<iostream>
using namespace std;
#include<iomanip>
float sub(float a,float b);
main()
{
	float a[4],b[2];int i,j;
	for(i=0;i<4;i++)
	{cin>>a[i];
	}
	for(i=0;i<2;i++)
	{cout<<fixed<<setprecision(2)<<sub(a[i],a[i+2])<<" ";}
}
float sub(float a,float b)
{float s;
s=(a-b);
}
