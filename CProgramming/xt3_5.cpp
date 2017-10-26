#include <iostream.h>
#include <math.h>
void main()
{
	float a, b, c, s, area;
	cin>>a>>b>>c;
	if( a + b > c && a + c > b && b + c > a)
	{
		s = (a + b + c)/2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"三角形的面积是： "<<area<<endl;
	}
	else
	{
		cout<<"输入的三个数不能构成三角形"<<endl;
	}
}