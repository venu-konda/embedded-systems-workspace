/*Complex :: Complex()
{
	cout<<"enter the real ::"<<endl;
	cin>>real;
	cout<<"enter the img ::"<<endl;
	cin>>img;
}*/	
void Complex :: SetData(void)
{
	cout<<"enter the real ::"<<endl;
	cin>>real;
	cout<<"enter the img ::"<<endl;
	cin>>img;
}	
void Complex ::Print(void)
{
	cout<<real;
	if(img>=0)
		cout<<"+";
	cout<<img<<"i"<<endl;
}
Complex Complex :: Mul(Complex e)
{
	Complex temp;
	temp.real=(real*e.real)-(img*e.img);
	temp.img=(img*e.real)+(real*e.img);
	return temp;
}
