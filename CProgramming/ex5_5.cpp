#include <iostream.h>
void main()
{
	double s=0,t=0,p=1,q=2;
	int n=1,m;
	while( n <= 20)
	{
		t = p/q;
		s += t;
		m = p;
		p = q;
		q = m+p;//q=m+q;
		n++;
	}
	cout<<"1/2+2/3+3/5+...+"<<m<<"/"<<p<<"="<<s<<endl;

}
	