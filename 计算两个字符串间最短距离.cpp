#include<iostream>
#include<cmath>
using namespace std;
char changeletter(char c);
main()
{
	char a[10],b[10];int i,j,t,y=25;
	cin>>a;cin>>b;
	for(i=0;a[i]!='\0';i++)
	if(a[i]>='A'&&a[i]<='Z')a[i]=a[i]+32; //转化为小写 
	for(j=0;b[j]!='\0';j++)
	if(b[j]>='A'&&b[j]<='Z')b[j]=b[j]+32;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{t=abs(a[i]-b[j]);
		if(y>t)y=t;}//计算每个字母差值并比较 
	}
	cout<<y;
}

