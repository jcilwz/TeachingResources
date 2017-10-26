#include<iostream.h>
void main()
{
	long n,m;
	int a=0,b=0;
	float t = 1,p;
	cout<<"请输入一个不超过8位的整数: ";
	cin>>n;
	m = n;
	if( n < 0)
	{
		t = 1.5;
		m = -n;
	}
	if( m%2 == 0)
		t *= 2;
	
	while( m > 0)
	{
		a++;
		if( m%10 == 2) b++;
		m = m/10;
	}
	
	p = b/(float)a*t*100;

	cout<<n<<"的犯二程度是:"<<p<<"%"<<endl;
}

