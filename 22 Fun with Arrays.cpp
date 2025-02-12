#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MIN 0
#define MAX 100

int randomNum();

int main()
{
	int *array1,*array2,size1,size2;
	int diffArray[100],equalArray[100];
	int equal_count=0,diff_count=0;
	printf("Input size:");
	scanf("%d",&size1);
	printf("Input size:");
	scanf("%d",&size2);
	array1=(int*)malloc(size1*sizeof(int));
	array2=(int*)malloc(size2*sizeof(int));
	for(int i=0;i<size1;i++)
	{
		//int random_num=randomNum();
		array1[i]=randomNum();
	}
	for(int i=0;i<size2;i++)
	{
		//int random_num=randomNum();
		array2[i]=randomNum();
	}
	for(int i=0;i<size1;i++)
	{
		int size_count=0;
		for(int j=0;j<size2;j++)
		{
			if(*(array2+i)==*(array1+i))
			{
				equalArray[equal_count]=*(array1+1);
				equal_count++;
				break;
			}
			size_count++;
		}
		if(size_count==size2)
		{
			diffArray[diff_count]=*(array1+1);
			diff_count++;
		}
	}
	printf("Content of array1:\n");
	for(int i=0;i<size1;i++)
	{
		printf("%d ",*(array1+i));
	}
	printf("\n\nContent of array2:\n");
	for(int i=0;i<size2;i++)
	{
		printf("%d ",*(array2+i));
	}
	printf("\n\nContent of diffArray:\n");
	for(int i=0;i<diff_count;i++)
	{
		printf("%d ",*(diffArray+i));
	}
		printf("\n\nContent of equalArray:\n");
	for(int i=0;i<equal_count;i++)
	{
		printf("%d ",*(equalArray+i));
	}
	return 0;
}

int randomNum()
{
    int min=MIN,max=MAX;
    int random_num;
    srand(time(0));
	random_num=(rand()%(max-min+1))+min;
	return random_num;
}