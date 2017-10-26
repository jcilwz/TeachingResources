#include <iostream.h>
void main()
{
	int a,b,c,t;
	cin>>a>>b>>c;
	if(a>b)
		t = a;
	else
		t = b;
	if(t > c)
		cout<<"The Max value: "<<t;
	else
		cout<<"The Max value: "<<c;
}

