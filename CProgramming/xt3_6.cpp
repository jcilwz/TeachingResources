#include <iostream.h>
void main()
{
	double r, pi=3.14159;
	int k;
	cout<<"输入一个圆的半径和一个整数 r k: "<<endl;
	cin>>r>>k;
	switch(k)
	{
	case 1:
		cout<<"圆的面积="<<pi*r*r<<endl;
		break;
	case 2:
		cout<<"圆的周长="<<2*pi*r<<endl;
		break;
	case 3:
		cout<<"圆的面积="<<pi*r*r<<endl;
		cout<<"圆的周长="<<2*pi*r<<endl;
		break;
	}
}
