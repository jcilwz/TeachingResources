#include <iostream.h>
#include <stdio.h>
#define N 100
int fun(char*s);//����ԭ������
void main()
{
	char s[N];
	int t;
	cout<<"������һ���ַ�: "<<endl;
	gets(s);
	t=fun(s);//���ú�����ͳ�Ƶ��ʸ���
	//���ͳ�ƽ��
	cout<<"��������ַ�����"<<s<<endl;
	cout<<"����"<<t<<"������"<<endl;
}

int fun(char *s)
{
	int t=0;
	char* p,*q;
	p=q=s;
	//����ȥ����ǰ��Ŀո�
	while( *p != '\0' && *p == ' ') p++;
	while( *q != '\0')
		q++;
	q--;
	while( *q == ' ')
		q--;
	//ͳ�Ƶ�����
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