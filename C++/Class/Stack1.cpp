#include<iostream>
#include <stdio_ext.h>
using namespace std;
#define MAX 5
class Stack
{
	int arr[MAX];
	int top;
	public : int SetTop()
		 {
			 top=-1;
			 return top;
		 }
		 int Push(int d)
		 {
			 arr[++top]=d;
			 return top;
		 }
		 int Pop()
		 {
			 return arr[top--];
		 }
		 int Peek()
		 {
			 return arr[top];
		 }
};
int main()
{
	Stack s1;
	int top=s1.SetTop();  
	int choice,data;
	while(1)
	{
		cout<<"1.push  2.pop  3.peek  4.exit"<<endl;
		__fpurge(stdin);
		cin>>choice;
		switch(choice)
		{
			case 1:if(top==MAX-1)
				       cout<<"stack full"<<endl;
			       else
			       {
					cout<<"enter data::"<<endl;
					cin>>data;
					top=s1.Push(data);

			       }
			       break;
			case 2:if(top==-1)
				       cout<<"empty stack"<<endl;
			       else
			       {
					data=s1.Pop();
					cout<<"poped data::"<<data<<endl;
					top--;
			       }
			       break;
			case 3:if(top==-1)
				       cout<<"empty stack"<<endl;
			       else
			       {
				       cout<<"peek:"<<s1.Peek()<<endl;
			       }
			       break;
			case 4:exit(0);
		}
	}
}

