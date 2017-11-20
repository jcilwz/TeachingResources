#include <iostream.h>
#define N 10
void main()
{
	long n,m;
	int a[N],k,i,flag;
	cout<<"输入一个正整数：";
	cin>>n;
	m = n;
	k=0;
	while(m > 0)
	{
		a[k++] = m%10;
		m = m/10;
	}

	flag = 1;
	for( i=0; i<k/2; i++)
	{
		if( a[i] != a[k-1-i])
		{
			flag = 0;
			break;
		}
	}
	
	if( flag)
		cout<<n<<"是回文数"<<endl;
	else
		cout<<n<<"不是回文数"<<endl;
}
