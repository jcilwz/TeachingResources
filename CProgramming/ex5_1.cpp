#include <iostream.h>
void main()
{
	int n,s;
	n = 1;
	s = 0;
	while( n <= 100)
	{
		s+=n;
		n++;
	}
	cout<<"1+2+3+...+100="<<s<<endl;
}