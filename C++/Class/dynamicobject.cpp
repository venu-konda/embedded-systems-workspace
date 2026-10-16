#include<iostream>
using namespace std;

class ABC
{
	int data1,data2;
	public : ABC()
		 {	
			 cout<<"in ABC COnstructor:"<<endl;
			 cout<<"enter the data1 and data2:"<<endl;
			 cin>>data1>>data2;
		 }
		 ABC(int a,int b)
		 {
			 data1=a;
			 data2=b;
		 }
		 void Print()const
		 {	//++data1;// error
			 cout<<data1<<" "<<data2<<endl;
		 }
		 void Inc()
		 {
			 ++data1;
			 ++data2;
		 }
		 ABC(ABC & obj)
		 {
			 data1=obj.data1;
			 data2=obj.data2;
		 }
		 ~ABC()
		 {
			 cout<<"ABC Destructor:"<<endl;
		//	delete []data1;
		//	delete []data2;
		 }
};

int main()
{
	ABC *ptr=NULL;
	ptr=new ABC;
	ptr->Print();
	ABC A;
	A.Print();
	ABC B=A;
	B.Print();
//	ptr.Print();
	delete ptr;
}










