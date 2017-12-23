#include <iostream.h>
#include <iomanip.h>
#define N 4
void main()
{
	int a[N][N],i,j;
	cout<<"请输入"<<N<<"行"<<N<<"列矩阵"<<endl;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			cin>>a[i][j];
	cout<<"你输入的矩阵是："<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			cout<<setw(4)<<a[i][j];
		cout<<endl;
	}

	int s1=0,s2=0;
	int *p=&a[0][0];
	for(i=0;i<N;i++)
		for(j=0;j<i;j++)
			s1 = s1+*(p+i*N+j);//s1=s1+a[i][j];
	cout<<"下三角阵元素之和:"<<s1<<endl;
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
			s2 = s2+*(p+i*N+j);//s2=s2+a[i][j];
	cout<<"上三角阵元素之和:"<<s2<<endl;
}