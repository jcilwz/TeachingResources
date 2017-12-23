#include <iostream.h>
#include <stdio.h>
int f(char * x);
void main()
{
	char s[100];
	int k;
	cout<<"请输入一个字符串："<<endl;
	gets(s);
	k=f(s);
	if( k==1)
		cout<<s<<"是回文"<<endl;
	else
		cout<<s<<"不是回文"<<endl;
}
int f(char *x)
{
	char *p,*q;
	p=q=x;
	while( *q != '\0') q++;
	q--;
	while( p<q)
	{
		/*if( *p == *q)
		{	p++; q--;}
		else
			return 0;*/
		if( *p!=*q)
			return 0;
		p++;
		q--;
	}
	return 1;
}
