#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *data,number;
	printf("Enter number of data:");
	scanf("%d",&number);
	data=(int *)calloc(number,sizeof(int));
	for(int i=0;i<number;i++)
	{
		printf("Enter data:");
		scanf("%d",data+i);
	}
	for(int i=0;i<number;i++)
	{
		if(*(data+i)>*data)
		{
			*data=*(data+i);
		}
	}
	printf("The largest data is %d",*data);
	return 0;
}