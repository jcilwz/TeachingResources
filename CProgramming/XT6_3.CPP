#include <iostream.h>
#include <iomanip.h>
#define N 4
void main()
{
	int a[N][N],i,j,sum;
	void display(int a[][N],int);
	cout<<"请依次输入矩阵元素的值"<<endl;
	for( i = 0; i < N; i++)
	{
		for( j = 0; j < N; j++)
			cin>>a[i][j];
	}
	
	cout<<"你所输入的矩阵是："<<endl;
	display(a,N);

	sum = 0;
	for( i = 0; i < N; i++)
		sum = sum + a[i][i];
	cout<<"主对角线元素之和:"<<sum<<endl;

	for( i = 0; i < N; i++)
	{
		for( j = 0; j < i; j++)
			a[i][j]--;
		for( j = i+1; j < N; j++)
			a[i][j]++;
	}

	cout<<"新的矩阵："<<endl;
	display(a,N);
}

void display( int a[][N], int n)
{
	for( int i = 0; i < n; i++)
	{
		for( int j = 0; j < N; j++)
			cout<<setw(4)<<a[i][j];
		cout<<endl;
	}
}

