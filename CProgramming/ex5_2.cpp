#include <iostream.h>
void main()
{
	int n=1,sum=0;
	for(;;n++)
	{
		sum = sum + (2*n + 1);
		if( sum > 1000)
			break;
	}
	cout<<"n="<<n<<","<<"sum="<<sum<<endl;
}