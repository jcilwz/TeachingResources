#include <iostream.h>
#include <stdio.h>
int f(char * x);
void main()
{
	char s[100];
	int k;
	cout<<"������һ���ַ�����"<<endl;
	gets(s);
	k=f(s);
	if( k==1)
		cout<<s<<"�ǻ���"<<endl;
	else
		cout<<s<<"���ǻ���"<<endl;
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
