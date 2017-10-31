#include <iostream.h>
int minCommonMultiple(int,int);
int maxCommonDivisor(int,int);
void main()
{
	int a,b;
	cout<<"输入两个正整数：";
	cin>>a>>b;
	cout<<a<<","<<b<<"的最小公倍数是："<<minCommonMultiple(a,b)<<endl;
	cout<<a<<","<<b<<"的最大公约数是："<<maxCommonDivisor(a,b)<<endl;

}

/**
  计算正整数a和b的最小公倍数。
  算法：
  1.首先用c表示a,b中最大的数；
  2.对于一个正整数k(c<=k<=a*b),如果k同时整除a和b，则k是最小公倍数
 */
int minCommonMultiple(int a, int b)
{
	int c=b;
	if(a>b) c=a;
	for(int k=c; k<=a*b; k++)
	{
		if( k%a == 0 && k%b == 0)
		{
			c = k;
			break;
		}
	}
	return c;
}

/**
 计算正整数a和b的最大公约数
 */
int maxCommonDivisor(int a, int b)
{
	int r,t;
	if( a > b)
	{
		t=a; a=b; b=t;
	}
	do{
		r = a%b;
		a = b;
		b = r;
	}while(r!=0);
	return a;
}
