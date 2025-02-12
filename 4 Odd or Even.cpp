#include<stdio.h>
const int NUM=2;
/*int main()
{
	int num[2];
	printf("input %d numbers:\n",NUM);
	for(int count=0;count<NUM;count++)
	{
		scanf("%d",&num[count]);
	}
	for(int count=0;count<NUM;count++)
	{
		if(num[count]%2==0)
		{
			printf("%d is even.\n",num[count]);
		}
		else{
			printf("%d is odd.\n",num[count]);
		}
	}
	return 0;
}*/

void verifyOddEven(int num1,int num2)
{
	if(num1%2==0)
	{
		printf("%d is even.\n",num1);
	}
	else
	{
		printf("%d is odd.\n",num1)
	}
	if(num2%2==0)
	{
		printf("%d is even.\n",num2);
	}
	else
	{
		printf("%d is odd.\n",num2)
	}
}