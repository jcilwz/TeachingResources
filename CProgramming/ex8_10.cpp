#include <iostream.h>
#include <stdio.h>
void fun(char *ss);
void main()
{
	char s[100];
	cout<<"请输入一个字符串:"<<endl;
	gets(s);
	fun(s);
	cout<<"转换后的字符串："<<endl;
	puts(s);
}
void fun(char *ss)
{
	int i=1;
	for(;ss[i]!='\0';i=i+2)
	{
		if( ss[i]>='a' && ss[i]<='z')
			ss[i] = ss[i] - 32;
	}
	/*ss = ss+1;
	while( *ss != '\0')
	{
		if( *ss>='a' && *ss<='z')
			*ss = *ss - 32;
		ss = ss + 2;
	}*/
}
