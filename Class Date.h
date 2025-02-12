#include<iostream>
#include<fstream>

using namespace std;

class Date{
	private:
		int year,month,day;
	public:
		Date();
		Date(int _day,int _month,int _year);
		virtual ~Date();
		
		void setDay(int _day){
			day=_day;
		}
		void setMonth(int _month){
			month=_month;
		}
		void setYear(int _year){
			year=_year;
		}
		int GetDay(void){
			return day;
		}
		int GetMonth(){
			return month;
		}
		int GetYear(){
			return year;
		}
};