#include <iostream.h>
void main()
{
	int a[10];
	int *pmax,*pmin,*p,t;
	pmax=pmin=a;
	//输入10个整数
	cout<<"请输入10个整数:"<<endl;
	for(p=a; p<a+10; p++)
		cin>>*p;
	//找出最大数和最小数
	for(p=a+1; p<a+10; p++)
	{
		if( *pmax < *p)
			pmax = p;
		else if( *pmin > *p)
			pmin = p;
	}
	//交换最大数和最小数
	t=*pmax;
	*pmax=*pmin;
	*pmin=t;
	//输出交换后的数组
	cout<<"交换后的数组："<<endl;
	for(p=a; p<a+10; p++)
		cout<<*p<<" ";
	cout<<endl;
}
