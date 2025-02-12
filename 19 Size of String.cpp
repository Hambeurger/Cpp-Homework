#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *string;
	char c;
	int i=0;
	while(getchar()!='\n')
	{
		c=getchar();
		string=&c;
		i++;
	}
	printf("The number of characters is:%d",i);
	return 0;
}