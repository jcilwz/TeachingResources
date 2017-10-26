#include <iostream.h>
void main()
{
	int x,y;
	double t=1;
	cout<<"Enter two integers x y: "<<endl;
	cin>>x>>y;
	for(int i=1; i<=y; i++)
		t = t*x;
	cout<<x<<"^"<<y<<"="<<t<<endl;
}