#include<stdio.h>
struct Person{
	char name[50];
	int day,month,year;
};

int oldestFcn(struct Person person1,struct Person person2);

int main()
{
	struct Person person1;
	struct Person person2;
	printf("Enter name and birthday of two user (format:name day month year):\n");
	scanf("%s %d %d %d",person1.name,&person1.day,&person1.month,&person1.year);
	scanf("%s %d %d %d",person2.name,&person2.day,&person2.month,&person2.year);
	
	switch(oldestFcn(person1,person2))
	{
		case 1:
			printf("%s is older.",person1.name);
			break;
		case 2:
			printf("%s is older.",person2.name);
			break;
		default:
			printf("They are born on the same day.");
	}
	return 0;
}

int oldestFcn(struct Person person1,struct Person person2)
{
	if(person1.year<person2.year)
	{
		return 1;
	}
	else if(person1.year>person2.year)
	{
		return 2;
	}
	else //person1.year=person2.year
	{
		if(person1.month<person2.month)
		{
			return 1;
		}
		else if(person1.month>person2.month)
		{
			return 2;
		}
		else //person1.month=person2.month
		{
			if(person1.day<person2.day)
			{
				return 1;
			}
			else if(person1.day>person2.day)
			{
				return 2;
			}
			else //person1.day=person2.day
			{
				return 0;
			}
		}
	}
	
	/*printf("%d\n",person2.day);
	printf("%d\n".person2.day);
	printf("%s\n",person2.name);
	printf("%s\n",person2.name);
	return 0
Xima 6 6 2000
Ran 7 7 1999
Xima is older.	
	*/
}