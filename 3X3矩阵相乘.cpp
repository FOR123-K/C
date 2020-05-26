#include<iostream>
using namespace std;
main()
{
	int a[9],b[9],c[9],i,j;
	for(i=0;i<9;i++)
	cin>>a[i];
	for(j=0;j<9;j++)
	cin>>b[j];
	{for(i=0;i<3;i++)
	c[i]=a[0]*b[i]+a[1]*b[i+3]+a[2]*b[i+6];}
	{for(i=0;i<3;i++)c[i+3]=a[3]*b[i]+a[4]*b[i+3]+a[5]*b[i+6];}
	{for(i=0;i<3;i++)c[i+6]=a[6]*b[i]+a[7]*b[i+3]+a[8]*b[i+6];}
	for(j=0;j<9;j++)
	{cout<<c[j];cout<<" ";if(j%3==2)cout<<endl;}
}
