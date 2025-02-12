#include<stdio.h>
int isPrime(int num);
void identifyPrimes(int range);

int main()
{
	int num1,num2,range;
	printf("Input two numbers:");
	scanf("%d %d",&num1,&num2);
	
	switch(isPrime(num1))
	{
		case 0:
			printf("%d is not prime number.\n",num1);
			break;
		case 1:
			printf("%d is prime number.\n",num1);
			break;
	}
	switch(isPrime(num2))
	{
		case 0:
			printf("%d is not prime number.\n",num2);
			break;
		case 1:
			printf("%d is prime number.\n",num2);
			break;
	}
	
	printf("Input range:");
	scanf("%d",&range);
	identifyPrimes(range);
	
	return 0;
}

int isPrime(int num)
{
	for(int count=2;count<num;count++)
	{
		if(num%count==0)
		{
			return 0; //not prime number
		}
	}
	return 1; //is prime number
}

void identifyPrimes(int range)
{
	printf("Prime numbers within this range are:");
	for(range;range>0;range--)
	{
		switch(isPrime(range))
		{
			case 0:
				break;
			case 1:
				printf("%d ",range);
		}
	}
}