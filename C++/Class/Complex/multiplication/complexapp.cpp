#include <iostream>
using namespace std;
#include "complex.h"
#include "complex.cpp"
int main()
{
	Complex e1,e2,e3;
	e1.SetData();
	e1.Print();
	e2.SetData();
	e2.Print();
	e3=e1.Mul(e2);
	e3.Print();
}
