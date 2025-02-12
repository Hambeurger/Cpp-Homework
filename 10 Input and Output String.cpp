#include<stdio.h>
/*int main()
{
	char *name;
	printf("Enter your name: ");
	gets(name);
	printf("Your name is: ");
	puts(name);
	return 0;
}*/
struct Person{
	char name[20];
	char surname[20];
};

int main()
{
	struct Person person1;
	struct Person person2;
	
	printf("Enter your name: ");
	gets(person1.name);
	printf("Enter your surname: ");
	gets(person1.surname);
	printf("Enter your name: ");
	gets(person2.name);
	printf("Enter your surname: ");
	gets(person2.surname);
	
	puts("Person's information is:");
	puts(person1.name);
	puts(person1.surname);
	puts(person2.name);
	puts(person2.surname);
	
	return 0;
}