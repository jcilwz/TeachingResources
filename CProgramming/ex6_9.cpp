#include<iostream.h>
int fun(int m)
{
	int n = 0;
	cout<<"1到"<<m<<"之内能被7或11整除的整数有："<<endl;
	for(int i = 1; i<=m; i++)
	{
		if(i%7==0 || i%11==0)
		{
			cout<<i<<" ";
			n++;
		}
	}
    return n;
}

void main()
{
	int m,n;
	cout<<"请输入一个整数:"<<endl;
	cin>>m;
    n = fun(m);
	cout<<"n="<<n<<endl;
}