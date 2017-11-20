#include <iostream.h>
#define N 10
void main()
{
	int a[]={12,24,27,34,38,42,46,49,89,97};
	int x,low,high,mid;
	cout<<"Enter an integer: ";
    cin>>x;

	low=0; high=N-1;
	while( low <= high)
	{
		mid = (low + high)/2;
		if( a[mid] == x)
		{
			cout<<"找到a["<<mid<<"]="<<x<<endl;
			break;
		}
		else if ( a[mid] > x)
			high = mid-1;
		else
			low = mid + 1;
	}
	if( low > high)
		cout<<"无此数"<<endl;
}

	