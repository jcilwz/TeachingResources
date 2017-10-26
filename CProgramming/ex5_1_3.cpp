#include <iostream.h>
void main()
{
	int n,s;
	n = 1;
	s = 0;
	while( n <= 99)
	{
		s += n;
		n = n + 2;
	}
	cout<<"1+3+5+...+99="<<s<<endl;
}