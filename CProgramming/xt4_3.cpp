#include <iostream.h>
void main()
{
	int n,m,step=0;
	cout<<"Enter an Integer: "<<endl;
	cin>>n;
	m = n;
	while( m > 1)
	{
		if( m%2 == 1)
			m = m * 3 + 1;
		else
			m = m/2;
		cout<<m;
		if(m != 1){
			cout<<"->";
			step++;
		}
	}
	cout<<endl;
	cout<<n<<"经过"<<step<<"步得到1:"<<endl;
}