#include <iostream>
using namespace std;

class circle
{
	float r,d,a,p;
	public:
	void set(void)
	{
		cout<<"enter the radius::";
		cin>>r;
		d=r*2;
	}
	void cal_area(void)
	{
		a=(3.14)*r*r;
	}
	void cal_peri(void)
	{
		p=2*(3.14)*r;
	}
	void print(void)
	{
		cout<<"r="<<r<<endl;
		cout<<"d="<<d<<endl;
		cout<<"a="<<a<<endl;
		cout<<"p="<<p<<endl;
	}
	
};
int main()
{
	circle obj;
	obj.set();
	obj.cal_area();
	obj.cal_peri();
	obj.print();
}
