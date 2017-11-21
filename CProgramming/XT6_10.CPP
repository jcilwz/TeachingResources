#include <stdio.h>
#include <iostream.h>
#define N 100
void main()
{
	char s[N];
	int i=0,count=0;
	cout<<"输入一个字符串："<<endl;
	gets(s);
	while( s[i+1] != '\0')
	{
		if( s[i]=='a' && s[i+1]=='b')
			count++;
		i++;
	}

	cout<<"字符对\"ab\"共有"<<count<<"对"<<endl;
}

