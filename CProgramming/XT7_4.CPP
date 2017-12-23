#include <iostream.h>
void main()
{
	int a[10];
	int *p,*q,t;
	//输入10个整数
	cout<<"请输入10个整数:"<<endl;
	for(p=a; p<a+10; p++)
		cin>>*p;
	//输出数组
	cout<<"你输入的数组是："<<endl;
	for(q=a; q<a+10; q++)
		cout<<*q<<" ";
	cout<<endl;
	//反序数组
	p=a;q--;
	while( p<q)
	{
		t=*p; *p=*q; *q=t;
		p++; q--;
	}
	cout<<"反序后的数组是："<<endl;
	for(p=a; p<a+10; p++)
		cout<<*p<<" ";
	cout<<endl;
}
