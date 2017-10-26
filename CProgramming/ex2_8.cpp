#include <iostream.h>
void main()
{
	int a, b, c, d;
	cin>>a>>b;
	//a=3;
	//b=4;
	c=a>b?b:a;
	d=a>b?a:b;
	//a>b?(c=b,d=a):(c=a,d=b);
	cout<<a<<","<<b<<"中较小的是：c="<<c<<endl;
	cout<<a<<","<<b<<"中较大的是：d="<<d<<endl;
}