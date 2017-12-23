#include <iostream.h>
void main()
{
	int a[10],*p,*q,*t,m;
	p=a;
	//输入数组元素值
	cout<<"请输入10个整数，用空格或换行隔开"<<endl;
	while(p<a+10)
	{
		cin>>*p;
		p++;
	}
	//输出排序前数组
	cout<<"排序前的数组："<<endl;
	for(p=a;p<a+10;p++)
		cout<<*p<<" ";
	cout<<endl;
	//排序
	for(p=a;p<a+9;p++)
	{
		t=p;
		for(q=p+1;q<a+10;q++)
		{
			if( *t > *q)
				t=q;
		}
		if( t!= p)
		{
			m=*p;
			*p=*t;
			*t=m;
		}
	}
	//输出排序后的数组
	cout<<"排序后的数组："<<endl;
	for(p=a;p<a+10;p++)
		cout<<*p<<" ";
	cout<<endl;
}
