#include<stdio.h>
char symbol;

	
int main()
{
	void Diamond(int row,int symbol_count=1);
	int row;
	int symbol_count=1;
	printf("Enter number of rows:");
	scanf("%d",&row);
	getchar();
	printf("Enter symbol of shape:");
	scanf("%c",&symbol);
	Diamond(row,symbol_count);
	return 0;
}

void Diamond(int row,int symbol_count=1)
{
	int space=row-1;
	int row_count=1;
	if(row_count>row)
	{
		return;
	}
	else
	{
			for(int i=0;i<row;i++)
		{
			for(space;space>0;space--)
			{
				printf(" ");
			}
			for(symbol_count;symbol_count>0;symbol_count--)
			{
				printf("%c",symbol);
				symbol_count+=2;
			}
			for(space;space>0;space--)
			{
				printf(" ");
			}
			printf("\n");
			row_count++;
		}
		Diamond(row,symbol_count);
	}
}