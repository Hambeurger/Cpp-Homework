#include<stdio.h>
int main()
{
	int count,*array;
	printf("Enter the number of elements in array:");
	scanf("%d",&count);
	printf("Enter array elements:");
	for(int i;i<count;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Reverse array is:");
	for(count;count>0;count--)
	{
		printf("%d ",array[count-1]);
	}
	return 0;
}