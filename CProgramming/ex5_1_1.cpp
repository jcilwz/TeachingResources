#include <iostream.h>
void main()
{
	int n,i,s;
	cout<<"Please enter an Integer: ";
	cin>>n;
	i = 1;
	s = 0;
	cout<<"while语句实现"<<endl;
	while(i<=n)
	{
		s+=i;
		i++;
	}
	cout<<"1+2+3+...+"<<n<<"="<<s<<endl;

	s=0;
	i=1;
	cout<<"do-while语句实现"<<endl;
	do{
		s += i;
		i++;
	}while(i<=n);
	cout<<"1+2+3+...+"<<n<<"="<<s<<endl;

}
