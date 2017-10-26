#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,x1,x2;
	cout<<"Enter three float a b c:";
	cin>>a>>b>>c;
	x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
	cout<<"x1="<<x1<<", "<<"x2="<<x2<<endl;
}
	
