#include "Class Date.h"

Date::Date()
{
	day=month=year=0;
}
Date::~Date()
{
}

int Date::GetDay()
{
	return day;
}
Date::Date(int _day,int _month,int _year)
{
	day=_day;
	month=_month;
	year=_year;
}

int main()
{
	Date da(1,1,2014),db;
	Date my_data(1,1,2000);
	
	return 0;
}