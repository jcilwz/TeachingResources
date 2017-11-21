#include <stdio.h>
#include <iostream.h>
#define N 100
void main()
{
	char s[N];
	cout<<"请输入字符串:"<<endl;
	gets(s);
	int i=0,j,maxlen=0,start=0;
	while( s[i] != '\0')
	{

		for( j = i; s[j] != '\0' && s[j] != ' '; j++);
		if( j-i > maxlen)
		{
			maxlen = j-i;
			start = i;
		}
		if( s[j] == '\0')
			break;
		i=j+1;
	}

	cout<<"最长的单词是：";
	for( i = start; i < maxlen + start; i++)
		cout<<s[i];
	cout<<endl;
}
				