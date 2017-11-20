#include <iostream.h>
#include <iomanip.h>
#define N 20
void inputMatrix(int a[][N], int n,int m);
void findSaddle(int a[][N],int n,int m);
void displayMatrix(int a[][N], int n, int m);
void main()
{
	int a[N][N],n,m;
	cout<<"请输入矩阵的行数和列数 n m"<<endl;
	cin>>n>>m;
	inputMatrix(a,n,m);
	displayMatrix(a,n,m);
	findSaddle(a,n,m);
}
void inputMatrix(int a[][N], int n, int m)
{
	cout<<"输入矩阵："<<endl;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin>>a[i][j];
}

void findSaddle(int a[][N], int n, int m)
{
	int i,j,r,c,t,s=0;
	for(i=0; i < n; i++)
	{
		//找第i行最大值元素
		t = a[i][0];
		for(j=1; j < m; j++)
		{
			if( a[i][j] > t)
			{
				t = a[i][j];
				c = j;//a[i][c]是第i行最大值
			}
		}

		//判断a[i][c]是不是第c列最小值
		for(r=0; r < n; r++)
		{
			if( r != i && a[r][c] < t)
			{
				break;//a[i][c]不是鞍点
			}
		}
		//上面的for循环执行到r=n才退出，则说明a[i][c]是鞍点
		if( r == n)
		{
			cout<<"找到鞍点a["<<i<<"]["<<c<<"]="<<a[i][c]<<endl;
			s++;
		}
	}

	if( s > 0)
		cout<<"共找到"<<s<<"个鞍点"<<endl;
	else
		cout<<"此矩阵无鞍点"<<endl;
}

void displayMatrix(int a[][N], int n, int m)
{
	cout<<"你输入的矩阵是："<<endl;
	for(int i = 0; i < n; i++)
	{
		for( int j = 0; j < m; j++)
			cout<<setw(4)<<a[i][j];
		cout<<endl;
	}
}

