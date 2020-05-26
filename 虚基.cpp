#include  "iostream" 
using  namespace  std; 
class vehicle
{
	public:
		vehicle(int x=0,int y=0){maxspeed=x;weight=y;
		cout<<"vehicle constructor called. maxspeed:"<<x<<";"<<"weight"<<y<<endl;}
		~vehicle(){	cout<<"vehicle destructor called. maxspeed:"<<maxspeed<<";"<<"weight"<<weight<<endl;
		}
		void run(){cout<<"vehicle run"<<endl;
		}
		void stop(){cout<<"vehicle stop"<<endl;
		}
	private:
		int maxspeed,weight;	
};
class bicycle:virtual public vehicle
{
	public:
		bicycle(int i=0){height=i;cout<<"bicycle constructor called. height:"<<i<<endl;}
		~bicycle(){cout<<"bicycle destructor called. height:"<<height<<endl;}
	private:
		int height;
};
class motorcar:virtual public vehicle
{
	public:
		motorcar(int j=0){seatnum=j;cout<<"motorcar constructor called. seatnum:"<<j<<endl;}
		~motorcar(){cout<<"motorcar destructor called. seatnum:"<<seatnum<<endl;}
	private:
		int seatnum;
};
class motorcycle:public bicycle,public motorcar
{
	public:
		motorcycle(int m,int n,int p,int q):bicycle(m),motorcar(n),vehicle(p,q)
		{cout<<"motorcycle constructor called"<<endl;}
		~motorcycle(){cout<<"motorcycle destructor called"<<endl;}
};

int  main(int  argc,  char  *argv[]) 
{ 
        motorcycle  m(1,  2,  3,  4);//1表示height，2表示setnum，3表示maxspeed，4表示weight 
        m.run(); 
        m.stop(); 
        return  0; 
}

