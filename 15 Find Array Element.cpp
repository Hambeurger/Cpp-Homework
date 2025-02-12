#include<stdio.h>
static int array[10]={1,2,3,4,5,6,7,8,9,10};

int main()
{
	int value;
	printf("Input search value:");
	scanf("%d",&value);
	for(int i;i<10;i++)
	{
		if(value==array[i])
		{
			printf("Value is present in the array.\n");
			printf("Its index is:%d",i);
			return 0;
		}
	}
	printf("Value is not present in the array.");
	return 0;
}