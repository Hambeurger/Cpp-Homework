#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randomNum();

int main()
{
	
	int random_num,guess;
	random_num=randomNum();
	for(int count=10;count>0;count--)
	{
		printf("Guess the number:");
		printf("\nAttempts Left:%d\n",count);
		scanf("%d",&guess);
		if(guess>random_num)
		{
			printf("Guess is too high.\n");
		}
		else if(guess<random_num)
		{
			printf("Guess is too low.\n");
			
		}
		else
		{
			printf("Guess is right!\n");
			break;
		}
	}
	printf("Game over.");
	return 0;
}

int randomNum()
{
    int lower=1,upper=100;
    int random_num;
    srand(time(0));
	random_num=(rand()%(upper-lower+1))+lower;
	return random_num;
}
