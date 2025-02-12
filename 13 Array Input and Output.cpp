#include<stdio.h>
static int count=5;

int main()
{
	int number[count];
	printf("Enter %d numbers:\n",count);
	for(int i;i<count;i++)
	{
		scanf("%d",&number[i]);
	}
	
	printf("Display integers:");
	for(int i;i<count;i++)
	{
		printf("%d ",number[i]);
	}
	
	return 0;
}