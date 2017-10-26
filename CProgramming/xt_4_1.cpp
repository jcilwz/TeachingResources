#include <iostream.h>
void main()
{
	int n,m,prime,i=0;
	for( m=100; m <= 200; m++)
	{
		prime = 1;
		for( n = 2; n < m; n++)
		{
			if( m%n == 0)
			{
				prime = 0;
				break;
			}
		}
		if( prime == 1)
		{
			cout<<"\t"<<m;
			i++;
			if( i%5 == 0)
				cout<<"\n";
		}
	}
	if(i%5 != 0)
		cout<<"\n";
}

