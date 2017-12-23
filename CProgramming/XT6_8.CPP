#include <stdio.h>
#include <iostream.h>
#define N 80
void main()
{
	char a[N],b[N],c[N];
	cout<<"输入第一个字符串"<<endl;
	gets(a);
	cout<<"输入第二个字符串"<<endl;
	gets(b);

	int i,j;
	j = 0;
	for( i = 0; a[i] != '\0'; i++)
		c[j++] = a[i];
	for( i = 0; b[i] != '\0'; i++)
		c[j++] = b[i];
	c[j] = '\0';

	cout<<"连接后的字符串"<<endl;
	puts(c);
}
