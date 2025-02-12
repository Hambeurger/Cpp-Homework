#include<stdio.h>
int main()
{
	int timeT,*hours,*minutes;
	int h,m;
	printf("Input time in minutes:");
	scanf("%d",&timeT);
	if(timeT<60)
	{
		h=0;
		hours=&h;
		minutes=&timeT;
	}
	else //if timeT>=60
	{
		h=timeT/60;
		m=timeT%60;
		hours=&h;
		minutes=&m;
	}
	printf("Hours=%d, Minutes=%d",*hours,*minutes);
	return 0;
}