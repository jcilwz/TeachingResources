#include <iostream.h>
void main()
{
	int a,b,c,t;
	cin>>a>>b>>c;
	if( a < b)
	{
		if( b < c) //a<b<c
			cout<<c<<","<<b<<","<<a<<endl;
		else // a<b, c<b
			if( a < c) // a<c<b
				cout<<b<<","<<c<<","<<a<<endl;
			else // c<a<b
				cout<<b<<","<<a<<","<<c<<endl;
	}
	else // b<a
	{
		if ( c < b)// c<b<a
			cout<<a<<","<<b<<","<<c<<endl;
		else // b<a, b<c
			if( a < c) //b<a<c
				cout<<c<<","<<a<<","<<b<<endl;
			else //b<c<a
				cout<<a<<","<<c<<","<<b<<endl;
	}
}
