#include<iostream>
using namespace std;
main()
{
	int i,j,m,n;
	cin>>i;j=i;m=i;n=i;
	while(i!=0)
	{i=j/2+m/3;//ÿ�κ���ˮƿ�Ǻ�ƿ�ӻ���ƿ�� 
	j=i+j%2;//ÿ�κ���ˮ�뻻ʣ�µ�ƿ���ܺ� 
	m=i+m%3;//ÿ�κ���ˮ�뻻ʣ�µ�ƿ���ܺ� 
	n=n+i;}//ÿ�λ������ƿ�� 
	cout<<n;
}
