 



	
#include  <iostream> 
#include  <cmath> 
using  namespace  std; 

//判断是否为素数 
int  isPrime(long  num) 
{ 
int i;
for(i=2;i<num;i++)
{if(num%i==0) cout<<"0";
if(i==num/2) cout<<"1";} 
} 

//计算质因素分解， 
void  factorization(long  n,
long*p,int a) 
{ 
int s;
for(int i=2;i<n/2;i++)
{if(n%i==0&&isPrime(i))p[a]=i;a=+1;
s=n/i;
{if(!isPrime(s))factorization(s,p,a);
if(isPrime(s))p[a+1]=s;break;}} 
        return; 
} 

int  main() 
{ 
        long  n; 
        long  factor[100]; 
        int  numofFactor  =  0; 
        cin  >>  n; 
        factorization(n,  factor,  numofFactor); 
        for  (int  i  =  0;  i  <  numofFactor;  i++) 
        { 
                cout  <<  factor[i]  <<  "  "; 
        } 
        cout  <<  endl; 
        return  0; 
} 
