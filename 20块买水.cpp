#include<iostream>
using namespace std;
main()
{
	int i,j,m,n;
	cin>>i;j=i;m=i;n=i;
	while(i!=0)
	{i=j/2+m/3;//每次喝完水瓶盖和瓶子换的瓶数 
	j=i+j%2;//每次喝完水与换剩下的瓶子总和 
	m=i+m%3;//每次喝完水与换剩下的瓶盖总和 
	n=n+i;}//每次换完的总瓶数 
	cout<<n;
}
