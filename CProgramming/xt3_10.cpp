#include <iostream.h>
void main()
{
	int year,month,days,leap=0;
	cout<<"Enter year month: "<<endl;
	cin>>year>>month;
	if( (year%400 == 0) || (year%4==0 && year%100 != 0))
		leap = 1;
	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:
		if(leap == 1)
			days = 29;
		else
			days = 28;
	}
	cout<<year<<"年"<<month<<"月有"<<days<<"天"<<endl;
}