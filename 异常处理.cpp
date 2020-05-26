#include<iostream>
#include<string>
#include<exception>
using  namespace  std; 
class MyException1:public exception
{
	public:
	const char*what() const throw()
	{return"12MyException1";}
};
class MyException2:public exception
{
	public:
	const char*what() const throw()
	{return"12MyException2";}
};
int divide(int i,int j)
{
	if(j==0)throw j;
	return 0;
}
//请定义函数divide()，对除0操作引发异常 
 

int  main() 
{ 
        int  id,k; 
        cin>>id; 
        char  a; 
        string  s="hello"; 
          try 
        { 
                switch  (id) 
                { 
                case  1: 
                        throw  MyException1(); 
                        break; 
                case  2: 
                        throw  MyException2(); 
                        break; 
                case  3: 
                        k=divide(8,0); 
                        break;                                         
                case  4: 
                        a=s.at(10); 
                        cout<<a<<endl; 
                        break;                                         
                default: 
                        break; 
                } 
        } 
        catch  (MyException1  &e) 
        { 
              cout  <<  "exception:  "<<e.what()<<  endl; 
        } 
        catch  (MyException2  &e) 
        { 
                cout  <<  "exception:  "<<e.what()<<  endl; 
        } 
        catch  (int  &e) 
        { 
                cout  <<  "exception:  "<<e<<  endl; 
        }         
        catch(exception  &e) 
        { 
              cout  <<  "exception:  "<<e.what()<<  endl; 
        } 
        cout<<"Return  to  main()"<<endl; 
        return  0; 
}
