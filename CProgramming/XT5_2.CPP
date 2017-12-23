#include <iostream.h>
void main()
{
	float fun(int);
	float s;
	int n;
	cout<<"请输入一个正整数:";
	cin>>n;
	s = fun(n);

	/**
	  控制输出格式为s=1+1/(1+2)+1/(1+2+3)+...
	  如果觉得较难，也可简单输出：cout<<"s="<<s<<endl;
	  */
	cout<<"s=1";
	for(int i=2; i<=n; i++)
	{
		cout<<"+1/(1";
		for(int j=2;j<=i;j++)
			cout<<"+"<<j;
		cout<<")";
	}
	cout<<"="<<s<<endl;
}
float fun(int n)
{
	float s=0.0,t;
	int i,j;
	for(i=1;i<=n;i++)
	{
		t=0.0;
		for(j=1;j<=i;j++)
		{
			t=t+j;
		}
		s=s+1/t;
	}
	return s;
}

