#include <iostream.h>
#include <stdio.h>
#define N 100
int fun(char*s);//函数原型声明
void main()
{
	char s[N];
	int t;
	cout<<"请输入一行字符: "<<endl;
	gets(s);
	t=fun(s);//调用函数，统计单词个数
	//输出统计结果
	cout<<"你输入的字符串："<<s<<endl;
	cout<<"共有"<<t<<"个单词"<<endl;
}

int fun(char *s)
{
	int t=0;
	char* p,*q;
	p=q=s;
	//首先去掉最前面的空格
	while( *p != '\0' && *p == ' ') p++;
	while( *q != '\0')
		q++;
	q--;
	while( *q == ' ')
		q--;
	//统计单词数
	while( p<=q)
	{
		if( *p == ' ' && *(p+1) != ' ')
		{
			t++;
		}
			p++;
	}
	return t+1;
}
