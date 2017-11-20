#include <iostream.h>
#define N 10
#define M 5
void main()
{
	int a[N][M],i,j,avg;
	for( i = 0; i < N; i++)
	{
		cout<<"输入第"<<i+1<<"个学生的5门课程成绩:"<<endl;
		for( j = 0; j < M; j++)
			cin>>a[i][j];
	}

	for( i = 0; i < N; i++)
	{
		avg = 0;
		for( j = 0; j < M; j++)
			avg = avg + a[i][j];
		avg = avg/M;
		cout<<"第"<<i+1<<"个学生的平均成绩是："<<avg<<endl;
	}
}

	
