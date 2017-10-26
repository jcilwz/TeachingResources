#include <iostream.h>
void main()
{
	int year, month, day, n;
	cout<<"Please enter year month day:"<<endl;
	cin>>year>>month>>day;
	int leap = 0;
	if( year%400==0 || (year%4==0 && year%100 != 0))
		leap = 1;
	n = 0;
	
	switch(month)
	{
	case 1:
		n = day;
		break;
	case 2:
		n = 31+day;
		break;
	case 3:
		n = 31+28+day;
		break;
	case 4:
		n = 31+28+31+day;
		break;
	case 5:
		n = 31+28+31+30+day;
		break;
	case 6:
		n = 31+28+31+30+31+day;
		break;
	case 7:
		n = 31+28+31+30+31+30+day;
		break;
	case 8:
		n = 31+28+31+30+31+30+31+day;
		break;
	case 9:
		n = 31+28+31+30+31+30+31+31+day;
		break;
	case 10:
		n = 31+28+31+30+31+30+31+31+30+day;
		break;
	case 11:
		n = 31+28+31+30+31+30+31+31+30+31+day;
		break;
	case 12:
		n = 31+28+31+30+31+30+31+31+30+31+30+day;
		break;
	}
	if(leap == 1 && month > 2)
		n++;
	cout<<year<<"年"<<month<<"月"<<day<<"号是本年的第"<<n<<"天"<<endl;
	/*
	switch(month)
	{
	case 12:
		n = n + 30;
	case 11:
		n = n + 31;
	case 10:
		n = n + 30;
	case 9:
		n = n + 31;
	case 8:
		n = n + 31;
	case 7:
		n = n + 30;
	case 6:
		n = n + 31;
	case 5:
		n = n + 30;
	case 4:
		n = n + 31;
	case 3:
		if (leap == 1)
			n = n + 29;
		else
			n = n + 28;
	case 2:
		n = n + 31;
	case 1:
		n = n + day;
	}
	cout<<year<<"年"<<month<<"月"<<day<<"号是本年的第"<<n<<"天"<<endl;
	*/
}