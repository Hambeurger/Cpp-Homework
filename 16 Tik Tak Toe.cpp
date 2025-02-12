#include<stdio.h>
char array[3][3];
char player_sign;
void displayGrid();
int checkRow(int row);
int checkColumn(int column);
int checkDiagonal();

int main()
{
	int row,column;
	void displayGrid();
	int count=0;
	
	while(count<5)
	{
			for(int player=1;player<=2;player++)
		{
			printf("Turn of player %d\n",player);
			printf("Insert position (format row,column):");
			scanf("%d,%d",&row,&column);
			
			switch(player)
			{
				case 1: //sign is O
					player_sign='O';
					break;
				case 2: //sign is X
					player_sign='X';
					break;
			}
			
			array[row][column]=player_sign;
			displayGrid();
			
			if(checkRow(row)||checkColumn(column)||checkDiagonal()==1)
			{
				printf("Player %d wins!\n",player);
				return 0;
			}
		}
		count++;
		printf("count=%d\n",count);
	}
	printf("The game was a tie.");
	return 0;
}

void displayGrid()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%c ",array[i][j]);
		}
		printf("\n");
	}
}

int checkRow(int row)
{
	if(array[row][0]==player_sign&&array[row][1]==player_sign&&array[row][2]==player_sign)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int checkColumn(int column)
{
	if(array[0][column]==player_sign&&array[1][column]==player_sign&&array[2][column]==player_sign)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int checkDiagonal()
{
	if(array[0][0]==player_sign&&array[1][1]==player_sign&&array[2][2]==player_sign)
	{
		return 1;
	}
	else if(array[0][2]==player_sign&&array[1][1]==player_sign&&array[2][0]==player_sign)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}