#include <iostream>
#include <iomanip>
using namespace std;

typedef int elementType;
typedef struct node
{
    elementType data;
    node* next;
} LList, *PList;

class linkedList

{

public:

    linkedList();//���캯��

    virtual ~linkedList();//����������ע��Ҫ���������нڵ����Դ

    void insert( int value );//���棺�����ʼ������ʹ�ã�

    bool initiate();//��ʼ��������ʹ��new��������ͷ��㡣�������ʧ�ܣ��򷵻�false�����򷵻�true

    bool isEmpty();//�жϵ������Ƿ�Ϊ��

    //ɾ���������е�pos��Ԫ�ؽ�㣬����ɾ���Ľڵ��ֵ����value�С�

    //ע�⣺�������Ϊ�ա�ɾ��λ�ô��������ȡ��Լ�ɾ��λ��Ϊ0���������Ҫ��ֹɾ���������Ӧ��Ϣ

    bool remove( int pos, int& value );

    void print();//˳���ӡ����������ǵ�����Ϊ�գ������ Empty

    int Length();//���ص������ȡ�����ǵ�����Ϊ�գ��򷵻�-1

private:

    LList *head;

    int len;

};
linkedList::linkedList()
{
    head=NULL;
    len=0;
}
linkedList::~linkedList()
{
delete head;}

bool linkedList::initiate()
{  if( head=new LList)
    {
        head->next=NULL;
        return true;
    }
    else return false;
}
void linkedList::insert(int value)
{   LList *p=new LList;
p->data=value;p->next=NULL;
LList *q=head;
    while(q->next!=NULL)
    {q=q->next;}
   q->next=p;
    len++;
}
int linkedList::Length()
{   if(isEmpty())return -1;
    return len;
}
bool linkedList::remove(int pos,int &val)
{if(pos<=0) {cout<<"pos <= 0, failed"<<endl;return false;}
if(pos>len){cout<<"pos > len, failed"<<endl;return false;}
int i;PList p,q;
p=head->next;q=head;
for(i=1;i<pos;i++)
{p=p->next;
q=q->next;}
q->next=p->next;
val=p->data;
delete p;len--;return true;
}
bool linkedList::isEmpty()
{
	if(head==NULL||head->next==NULL) return true;
	else return false;
}
void linkedList::print()
{
    if( isEmpty() )
    {
        cout << "Empty" << endl;
        return;
    }
    LList* tmp = head->next;
    while(tmp)
    {
        cout <<tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


int main(int argc, char* argv[])

{

    linkedList L1;

    int n;

    int val;

    //��ʼ������

    if(!L1.initiate())

        return 0;




    cin>>n;//�������������ݸ���

    for(int i=0; i<n; i++) //����n����������������

    {

        cin>>val;

        L1.insert(val);

    }

    cout << "Origin Length��" << L1.Length() << endl;//���������

    cout << "data��" ;

    L1.print();//��ӡ����




    cin>>n;//������Ҫɾ�������ݵ�λ��

    if (L1.remove(n,val))

    {

        //ɾ��λ��n�����ݣ�����ɾ��������ֵ����val��

        cout<<"Delete the data at position("<<n<<"):"<<val<<endl;

        cout<< "New Length��" << L1.Length()<< endl;//���������

        cout<< "data��" ;

        L1.print();//��ӡ����

    }

    return 0;


}




