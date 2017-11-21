#define N 10
#define M 20
#include <stdio.h>
#include <iostream.h>
static int w[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
static char mod[] = {'1','0','X','9','8','7','6','5','4','3','2'};
int validate(char s[]);
void main()
{
	int n,i,f,t=0;
	cin>>n;
	char ID[N][M];
	for(i=0; i<n; i++)
		gets(ID[i]);
    cout<<endl<<endl;
	for(i=0; i<n; i++)
	{
		f = validate(ID[i]);
		if( f==0)
		{
			puts(ID[i]);
			t++;
		}
	}
	if( t==0)
		cout<<"All Passed"<<endl;
}

int validate(char s[])
{
	int f=1,i=0,sum=0,z;
	
	while( s[i] != '\0' && i<17)
	{
		if( s[i]<48 || s[i]>57)
		{
			f=0;
			break;
		}
		sum += (s[i]-48)*w[i];
		i++;
	}
	if( i==17)
	{
		if( s[18] != '\0')
		    f=0;
	    else
		{
			z=sum%11;
			if( mod[z] != s[17])
				f=0;
		}
	}
	return f;
}

/**
 *前面的程序使用了字符串来存储身份证号码。
 *以下给一个稍简单些的程序，只使用字符型数组来存储身份证号码
 */
/*
#define N 100
#define M 18
#include <iostream.h>
static int w[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
static char mod[] = {'1','0','X','9','8','7','6','5','4','3','2'};
int validate(char s[]);
void output(char s[]);
void main()
{
	int n,f,t=0;
	int i,j;
	cin>>n;
	char ID[N][M];
	for(i=0; i<n; i++)
		for(j=0; j<M; j++)
			cin>>ID[i][j];
    cout<<endl<<endl;
	for(i=0; i<n; i++)
	{
		f = validate(ID[i]);
		if( f==0)
		{
			output(ID[i]);
			t++;
		}
	}
	if( t==0)
		cout<<"All Passed"<<endl;
}

int validate(char s[])
{
	int i=0,sum=0,z;
	//校验前17位是否都是数字
	while( i<17)
	{
		if( s[i]<48 || s[i]>57)//s[i]<'0'||s[i]>'9'
		{
		    return 0;
		}
		sum += (s[i]-48)*w[i];
		i++;
	}
	//校验最后一位验证码是否正确
	z=sum%11;
	if( mod[z] != s[17])
		return 0;
	
	return 1;
}

void output(char s[])
{
	for(int i=0; i<M; i++)
	    cout<<s[i];
	cout<<endl;
}
*/
