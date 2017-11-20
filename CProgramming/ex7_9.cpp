#define N 4
#define M 5
#include <iostream.h>
void main()
{
	int a[N][M] = {{1,3,5,7,9},{2,9,9,9,4},{6,9,9,9,8},{1,3,5,7,0}};
	int i,j,sum = 0;
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			if( i==0 || j==0 || i==N-1 || j==M-1)
				sum += a[i][j];
		}
	}
	cout<<"数组周边元素之和="<<sum<<endl;
}