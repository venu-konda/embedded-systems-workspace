#include<iostream>
using namespace std;
#define MAX 5
template<class type>
class Queue
{
	type Q[MAX];
	int rear,front;
	public:
	Queue()
	{
		rear=front=-1;
	}
	void Enq(type data)
	{
		if(rear==MAX-1)
			cout<<"queue is full"<<endl;
		else
		{
			if(front==-1)
				front++;
			Q[++rear]=data;
		}
	}
	type Deq()
	{
		type data;
		data=Q[front++];
		if(front==rear+1)
			front=rear=-1;
		return data;
	}
	~Queue()
	{
		cout<<"destructor"<<endl;
	}
	void menu()
	{
		int choice;
		type data;
		while(1)
		{
			cout<<"enter the choice::";
			cin>>choice;
			switch(choice)
			{
				case 1:cout<<"enter the data to enque::";
				       cin>>data;
				       Enq(data);
				       break;
				case 2:if(front==-1)
					       cout<<"queue empty"<<endl;
				       else
				       cout<<"data dequed::"<<Deq()<<endl;
				       break;
				case 3:exit(0);
			}
		}
	}
};
int main()
{
	Queue<string>s1;
	s1.menu();
}
