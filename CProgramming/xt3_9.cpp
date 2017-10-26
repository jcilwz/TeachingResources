#include <iostream.h>
#include <math.h>
void main()
{
	float x, y,d;
	cout<<"Enter the coodinate of a point x y: "<<endl;
	cin>>x>>y;
	d = sqrt((x-2)*(x-2) + (y-2)*(y-2));
	if( 1 - d > 1e-8)
		cout<<"The point ("<<x<<","<<y<<")在圆内"<<endl;
	else if ( d - 1 > 1e-8)
		cout<<"The point ("<<x<<","<<y<<")在圆外"<<endl;
	else
		cout<<"The point ("<<x<<","<<y<<")在圆上"<<endl;
}


