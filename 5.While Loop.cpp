#include<stdio.h>
int main()
{
	int count=0;
	while(count<=10)
	{
		printf("%d ",count);
		count++;
	}
	printf("\n");
	count-=1;
	
	while(count>=0)
	{
		printf("%d ",count);
		count--;
	}
	printf("\n");
	count+=1;
	
	do
	{
		printf("%d ",count);
		count++;
	}while(count<=10);
	printf("\n");
	count-=1;
	
	do
	{
		printf("%d ",count);
		count--;
	}while(count>=0);
	printf("\n");
	
	int num1,num2;	
	printf("input 2 numbers:");
	scanf("%d %d",&num1,&num2);
	while(num1>num2)
	{
		printf("%d ",num1);
		printf("%d \n",num2);
		break;
	}
	while(num1<num2)
	{
		printf("%d ",num2);
		printf("%d \n",num1);
		break;
	}
	return 0;
}