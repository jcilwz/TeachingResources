#include <iostream.h>
#include <iomanip.h>
#define N 20
void inputMatrix(int a[][N], int n,int m);
void findSaddle(int a[][N],int n,int m);
void displayMatrix(int a[][N], int n, int m);
void main()
{
	int a[N][N],n,m;
	cout<<"�������������������� n m"<<endl;
	cin>>n>>m;
	inputMatrix(a,n,m);
	displayMatrix(a,n,m);
	findSaddle(a,n,m);
}
void inputMatrix(int a[][N], int n, int m)
{
	cout<<"�������"<<endl;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin>>a[i][j];
}

void findSaddle(int a[][N], int n, int m)
{
	int i,j,r,c,t,s=0;
	for(i=0; i < n; i++)
	{
		//�ҵ�i�����ֵԪ��
		t = a[i][0];
		for(j=1; j < m; j++)
		{
			if( a[i][j] > t)
			{
				t = a[i][j];
				c = j;//a[i][c]�ǵ�i�����ֵ
			}
		}

		//�ж�a[i][c]�ǲ��ǵ�c����Сֵ
		for(r=0; r < n; r++)
		{
			if( r != i && a[r][c] < t)
			{
				break;//a[i][c]���ǰ���
			}
		}
		//�����forѭ��ִ�е�r=n���˳�����˵��a[i][c]�ǰ���
		if( r == n)
		{
			cout<<"�ҵ�����a["<<i<<"]["<<c<<"]="<<a[i][c]<<endl;
			s++;
		}
	}

	if( s > 0)
		cout<<"���ҵ�"<<s<<"������"<<endl;
	else
		cout<<"�˾����ް���"<<endl;
}

void displayMatrix(int a[][N], int n, int m)
{
	cout<<"������ľ����ǣ�"<<endl;
	for(int i = 0; i < n; i++)
	{
		for( int j = 0; j < m; j++)
			cout<<setw(4)<<a[i][j];
		cout<<endl;
	}
}
