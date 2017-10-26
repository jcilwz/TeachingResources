#include <iostream.h>
#include <math.h>
void main()
{
	float a,b,c,s;
	cout<<"请输入三角形的三条边长: ";
	cin>>a>>b>>c;
	s = (a+b+c)/2;
	cout<<"该三角形的面积是："<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
}