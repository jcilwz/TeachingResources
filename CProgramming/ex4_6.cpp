#include <iostream.h>
void main()
{
	char c;
	cin>>c;
	if( c >= '0' && c <= '9')
		cout<<"\n 你输入的数字是 :"<<c-48<<endl;
	else
		cout<<"\n 你所输入字符的ASCII码是："<<(int)c<<endl;
}