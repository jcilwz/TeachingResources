#include <iostream.h>
void main()
{
	int x,y,z,c=0;
	for( x= 5; x < 100; x=x+5)
		for( y=5; y < 50; y=y+5)
			for( z=5; z < 20; z=z+5)
			{
				if( x+2*y+5*z==100)
				{
					c = c+1;
					cout<<"1分："<<x<<"个，2分："<<y<<"个，5分："<<z<<"个"<<endl;
				}
			}

	cout<<"共有"<<c<<"种兑换方法"<<endl;
}