#include <iostream.h>
void main()
{
	int year, leap, nYears=0;
	for( year = 2000; year <= 3000; year++)
	{
		leap = 0;
		if( (year%400 == 0) || (year%4 == 0 && year%100 != 0))
			leap = 1;
		if (leap == 1)
		{
			nYears++;
			cout<<"\t"<<year;
			if( nYears%5 == 0)
				cout<<endl;
		}
	}
	if( nYears%5 != 0)
		cout<<endl;
}
