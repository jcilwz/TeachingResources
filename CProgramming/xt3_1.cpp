#include<iostream.h>
void main()
{
	int n,m,k=0;
	cout<<"Enter an Integer: ";
	cin>>n;
	m = n;
	while(m>0)
	{
		k++;
		m = m/10;
	}
	switch(k)
	{
	case 0:
	case 1:
		cout<<n<<"是小于10的数"<<endl;
		break;
	case 2:
		cout<<n<<"是10~99之间的数"<<endl;
		break;
	case 3:
		cout<<n<<"是100~999之间的数"<<endl;
		break;
	default:
		cout<<n<<"是1000以上的数"<<endl;
	}
}
	