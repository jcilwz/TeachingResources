#include <stdio.h>
#include <iostream.h>
#define N 100
void insert(char *s1,char *s2, int m);
void main()
{
	char s1[N],s2[N];
	int m;
	cout<<"请输入字符串1："<<endl;
	gets(s1);
	cout<<"请输入字符串2："<<endl;
	gets(s2);
	cout<<"请输入把字符串2插入到字符串1中的位置："<<endl;
	cin>>m;
	insert(s1,s2,m);
	cout<<"操作后的字符串1："<<endl;
	puts(s1);
}
void insert(char *s1,char *s2, int m)
{
	char *p1, *p2,*q=s2;
	p1=s1;
	p2=s1+m;
	int len = 0;
	while( *p1 != '\0') p1++;
	while( *q != '\0') len++;//计算s2的长度
	//从s1的最后一个字符开始到第m个字符，
	//每个字符往后移动len个位置
	while( p1>=p2)
	{
		*(p1+len) = *p1;
		p1--;
	}
	//把s2逐一插入到s1中
	q = s2;
	while( *q != '\0')
	{
		*p2 = *q;
		p2++; q++;
	}
}

