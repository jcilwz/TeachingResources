#include <iostream.h>
#include <iomanip.h>
void main()
{
	int a,b,t;
	cout<<"Enter a b:";
	cin>>a>>b;
	t=a;
	a=b;
	b=t;
	cout<<"a="<<a<<","<<"b="<<b<<endl;
}