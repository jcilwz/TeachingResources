#include <iostream.h>

float fun(double h)
{
	int x;
	x = (int)(h*1000);
	if(x%10>=5) 
		x=x/10+1;
	else 
		x=x/10;
	return x/(double)100;
}
void main()
{
	double h;
	cin>>h;
	cout<<fun(h)<<endl;
}