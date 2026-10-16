#include<iostream>
using namespace std;
#define MAX 5
int i;
template <class type>
class queue
{
	type arr[MAX];
	int front,rear;
	public:
	queue()
	{
		front=-1;
		rear=-1;
	}
	void enque(type data)
	{
		if(front==rear+1)
			cout<<"list full"<<endl;
		else
		{
		if(front==-1)
			front++;
		cout<<"f"<<front<<endl;
		arr[++rear]=data;
		if(rear==MAX-1)
			rear=-1;
		}
	}
	type deq()
	{
		type temp;
		temp=arr[front++];
		if((front==MAX)&&(rear>-1))
			front=0;
		else if((front==MAX)||(front==rear+1))
			front=rear=-1;
		return temp;
	}
	void menu()
	{
		int choice ;
		while(1)
		{
			cout<<"1.enq    2.deq"<<endl;
			cout<<"enter choice"<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1:type data;
				       cout<<"enter "<<endl;
				       cin>>data;
				       enque(data);
				       break;
				case 2:if(front==-1)
					       cout<<"empty"<<endl;
				       else
				       cout<<"deque::"<<deq()<<endl;
				       break;
			}
		}
	}
};
int main()
{
	queue<int>q;
	q.menu();
}
