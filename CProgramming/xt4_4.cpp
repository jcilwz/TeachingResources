#include <iostream.h>
void main()
{
	int n = 2,s=2,days = 0;
	double money = 0;
	for(;s<100;s=s+n)
	{
		money += 0.8*n;
		days++;
		cout<<"第"<<days<<"天购买"<<n
			<<"个苹果，截止今日，已总共购买"
			<<s<<"个苹果,共花费"<<money<<endl;
		n *= 3;
	}
	cout<<"每天平均花"<<money/days<<endl;
}
	
	