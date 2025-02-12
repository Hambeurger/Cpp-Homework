#include<stdio.h>
int main()
{
	/*int num[10];
	printf("The first ten natural numbers are:");
	for(int i=1;i<11;i++)
	{
		num[i-1]=i;
		printf("%d ",num[i-1]);
	}*/
	
	/*int n,sum=0,*num;
	printf("Enter a positive integer:");
	scanf("%d",&n);
	for(int i=1;i<n+1;i++)
	{
		num[i-1]=i;
		sum+=num[i-1];
	}
	printf("Sum=%d",sum);*/
	
	int count,*num,sum=0;
	printf("Enter the amount of numbers to be input:");
	scanf("%d",&count);
	for(int i=0;i<count;i++)
	{
		printf("Input num:");
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	printf("Sum of input numbers is:%d",sum);
	
	return 0;
}