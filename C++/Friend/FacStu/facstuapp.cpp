#include<iostream>
using namespace std;

class Student;
#include"Faculty.h"
#include"Student.cpp"
#include"Faculty.cpp"

int main()
{
	Student sobj[5];
	Faculty fobj;
	for(int i=0;i<5;i++)
	fobj.UpLoadMarks(sobj[i]);
	fobj.Print();
	for(int i=0;i<5;i++)
	sobj[i].Print();
}

