#include <iostream.h>
void main()
{
	int a[5]={2,4,6,8,10};
	int *p,m=1;
	
	for(p=a; p<a+5; p++)
		m*=*p;

	cout<<"数组各元素之积："<<m<<endl;
}

