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

