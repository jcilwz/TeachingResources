#include <iostream.h>
#include <iomanip.h>
void main()
{
	int n,m=-1,s = 0;
	int i,j,k;
	char c;
	cin>>n>>c;
	do
	{
		m = m + 2;
		s = s + m;
	}while(2*s-1<=n);
	s -= m;m -= 2;
	
	for(i = m; i >= 1; i=i-2)
	{
		for(k=1;k<=(m-i)/2;k++)
			cout<<' ';
		for(j = 1; j <=i; j++)
			cout<<c;
		
		cout<<endl;
	}
	for(i=3; i <= m; i=i+2)
	{
		for(k=1;k<=(m-i)/2;k++)
			cout<<' ';
		for(j=1; j <= i; j++)
			cout<<c;
		cout<<endl;
	}
	if( n-2*s+1 != 0)
		cout<<n-2*s+1<<endl;
}

