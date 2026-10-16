#include <iostream>
#include <stdio_ext.h>
using namespace std;
#define MAX 5
class Queue 
{
	int front,rear,arr[MAX];
	public : void set()
		 {
			 front=rear=-1;
		 }
		 void Enque(int a)
		 {
			 arr[++rear]=a;
			 if(front==-1)
				 front++;
		 }
		 int Deque()
		 {
			 if(front==rear+1)
				set();
			 return arr[front++];
		 }

};
int main()
{
	int rear=-1,front=-1;
	int data,choice;
	Queue q1;
	q1.set();
	while(1)
	{
		cout<<"1.enque  2.deque  3.exit"<<endl;
		cout<<"enter the choice::";
		cin>>choice;
		switch(choice)
		{
			case 1:if(rear==MAX-1)
				       cout<<"stack full"<<endl;
			       else
			       {
			       if(front==-1)
				       front++;
				       cout<<"enter the data::";
				       cin>>data;
				       q1.Enque(data);
				       rear++;
			       }
			       break;
			case 2:if(front==-1)
				       cout<<"queue empty"<<endl;
			       else
			       {
				cout<<"deque:"<<q1.Deque()<<endl;
				front++;
				if(front==rear+1)
					front=rear=-1;
			       }
			       break;
			case 3:exit(0);
		}
	}
}
