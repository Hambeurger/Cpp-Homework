#include<stdio.h>
class Student
	{
		public:
			char *name;
			int roll_number;
			float average_marks;
	};
	
int main()
{
	Student student;
	printf("Enter information\n");
	printf("Enter name:");
	scanf("%s",student.name);
	printf("Enter roll number:");
	scanf("%d",&student.roll_number);
	printf("Enter average marks:");
	scanf("%f",&student.average_marks);
	
	printf("\nDisplaying information:\n");
	printf("Name: %s\n",student.name);
	printf("Name: %d\n",student.roll_number);
	printf("Name: %f\n",student.average_marks);
}