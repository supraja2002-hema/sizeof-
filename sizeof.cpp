#include<iostream>
using namespace std;
int main()
{
	int a=sizeof(int);
	cout<<"size of int is "<<a<<" bytes\n";
	int b=sizeof(char);
	cout<<"size of char is "<<b<<" byte\n";
	int c=sizeof(float);
	cout<<"size of float is "<<c<<" bytes\n";
	int d=sizeof(double);
	cout<<"size of double is "<<d<<" bytes\n";
	cout<<"size of bool is "<<sizeof(bool)<<" byte\n";
	cout<<"size of wchar_t is "<<sizeof(wchar_t)<<" bytes\n";
	return 0;
}
