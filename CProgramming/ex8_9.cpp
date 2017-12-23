#include <iostream.h>
#define N 100
int fun(int *s, int t, int *k)
{
	int max,i,m;
	*k=s[0];
	m=0;
	for(i=1;i<t;i++)
	{
		if( *k < *(s+i))
		{
			*k=*(s+i);
			m = i;
		}
	}
	return m;
}
void main()
{
	int a[N],n,i, k,*pk;
	pk=&k;
	cout<<"输入数组大小:"<<endl;
	cin>>n;
	cout<<"输入数组元素：\n";
	for(i=0; i<n; i++)
		cin>>*(a+i);
	i=fun(a,n,pk);
	cout<<"最大元素是a["<<i<<"]="<<*pk<<endl;
}