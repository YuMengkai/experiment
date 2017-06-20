#include <iostream>
#include<cstring>
using namespace std;

void Print1(int a)
{
	cout << "In Print1:" << a << endl;
}

void Print2(int *a)
{
	cout << "In Print2,Memory:" << a << ", Value:" << *a << endl;
}

void Print3(int &a)
{
	cout << "In Print3:" << a << endl;
}

void main()
{
	int x = 0;
	int *p = &x;
	Print1(x);
	Print2(p);
	Print3(x);
}