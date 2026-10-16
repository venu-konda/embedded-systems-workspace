#include<iostream>
using namespace std;
#define MAX 5
int i,j;
//class bank;
class Shopping;
class bank
{
	int acc;
	int bal;
	string name;
	public:
	bank()
	{
		acc=123;
		bal=1000;
		name="venu";
	}

	friend class Shopping;

};
typedef struct Str
{
	char name[20];
	float price;
	int quantity;
}Shop;
class Shopping
{
	Shop shop[MAX];
	public:
	/*Shopping()
	{

	}*/
	void add()
	{
		if(i==MAX)
			cout<<"cart full"<<endl;
		else
		{
		cin>>shop[i].name;
		cin>>shop[i].price;
		cin>>shop[i].quantity;
		i++;
		}
	}
	void print()
	{
		if(i==0)
			cout<<"empty"<<endl;
		else
		for(j=0;j<i;j++)
		cout<<shop[j].name<<" "<<shop[j].price<<" "<<shop[j].quantity<<endl;
	}
	float total()
	{
		float total=0;
		for(j=0;j<i;j++)
		{
			total+=shop[j].price*shop[j].quantity;
		}
		return total;
	}
	void paybill(bank &b)
	{
		float t;
		if(b.bal==0)
			cout<<"insufficent"<<endl;
		else
		{
			t=total();
			b.bal-=t;
			i=0;
			cout<<"paid"<<endl;

		}
	}
	void menu(bank &b)
	{
		int choice;
	//	cout<<b.name;
		while(1)
		{
			cout<<"enter choice"<<endl; 
		cin>>choice;
		switch(choice)
		{
			case 1:add();
			       break;
			case 2:print();
			       break;
			case 3:paybill(b);
			       break;
			case 4:cout<<"total="<<total();
		}
	}
	}

	
};
int main()
{
	Shopping obj;
	bank b;
	obj.menu(b);
}

