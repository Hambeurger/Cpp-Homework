#include<stdio.h>
/*int main()
{
	int num1,num2,*pointer1,*pointer2;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	pointer1=&num1;
	pointer2=&num2;
	printf("The sum of the entered numbers is: %d",*pointer1+*pointer2);
	return 0;
}*/
int addTwoNumbers(int *pointer1,int *pointer2)
{
	return *pointer1+*pointer2;
}
int main()
{
	int num1,num2,*pointer1,*pointer2;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	pointer1=&num1;
	pointer2=&num2;
	printf("The sum is %d.",addTwoNumbers(pointer1,pointer2));
}