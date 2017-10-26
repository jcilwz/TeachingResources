#include <iostream.h>
void main()
{
	int a;
	cout<<"请输入一个三位数"<<endl;
	cin>>a;
	cout<<a<<"反序输出：";
	cout<<a%10<<a/10%10<<a/100<<endl;
}