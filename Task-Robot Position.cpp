/*Create a structure named Position representing the planar (integer) coordinates of a 
robot (x, y) and functions to manipulate it, including: a. PrintPosition(), which receives 
a pointer of the type Position and shows the coordinates as: “Robot Position: x = ?, y = ?” b. 
CreatePosition(), which receives two integers, x and y, and returns a new Position c. 
DestroyPosition(), which receives a Position and frees the memory occupied by it 
d. DistancePositions(), which receives the Position of the Robot and a target Position, returning 
the float-number distance between them e. GenerateArrayOfPositions(), which receives an integer 
N and returns an array of size N and type Position with randomly generated coordinates (between 
0 and 10) f. DestroyArrayOfPositions(), which receives an array of the type Position and destroys 
it, freeing the memory occupied by it Test all the functions.*/
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

#define MAX_POSITION 1
int N=10;

typedef class position{		
	public:
		int *x,*y;
}position;

int randomPosition()
{
	int min=0,max=10;
	int random_position;
	random_position=(rand()%(min-max+1))+min;
	return random_position;
}

void printPosition(position position){
	if(position.x==NULL&&position.y==NULL){
		printf("This position doesn't exist.\n");
	}
	else{
		printf("Robot position: x=%d,y=%d\n",*position.x,*position.y);
	}	
}
		
position createPosition(int x,int y){
	position position_c;
	position_c.x=(int*)malloc(MAX_POSITION*sizeof(int));
	position_c.y=(int*)malloc(MAX_POSITION*sizeof(int));
	position_c.x[0]=x;
	position_c.y[0]=y;
	return position_c;
}
	
void destroyPosition(position position_c){
	free(position_c.x);
	free(position_c.y);
	printf("Position destroyed.\n");
}
		
float distancePositions(position orig_position,position target_position){
	float distance_x,distance_y,distance;
	distance_x=pow((target_position.x-orig_position.x),2);
	distance_y=pow((target_position.y-orig_position.y),2);
	distance=sqrt(distance_x+distance_y);
	return distance;
}
		
position* generateArrayOfPositions(int N){
	position *array;
	int x,y;
	for(int i=0;i<N;i++){
		x=randomPosition();
		y=randomPosition();
		array[i]=createPosition(x,y);
	}
		return array;
}
		
void destroyArrayofPositions(position *array){
	int N=sizeof(array);
	for(int i=0;i<N;i++)
	{
		free(array[i].x);
		free(array[i].y);
	}
	printf("Array destroyed.\n");
}

int main()
{
	position position_1,position_2;
	int x1=3,y1=6,x2=1,y2=2;
	float distance;
	position *array;     
	
	//check create position  
	position_1=createPosition(x1,y1);
	position_2=createPosition(x2,y2);
	printf("Create position success.\n");
	printf("\n");
	                                 
	//check print function
	printPosition(position_1);
	printPosition(position_2);
	printf("\n");
	
	//check destroy position
	destroyPosition(position_1);
	destroyPosition(position_2);
	printf("\n");
                           
	//check distance function
	distance=distancePositions(position_1,position_2);
	printf("The distance is:%f.\n",distance);
	printf("\n");

	//check generate array
	srand(time(0));
	printf("Generating array:\n");
	array=generateArrayOfPositions(N);
	for(int i=0;i<N;i++)
	{
		printPosition(array[i]);
	}
	printf("\n");
	
	//check destroy array
	destroyArrayofPositions(array);
	printf("\n");
	
	printf("Program End.");
	
	exit(0);
}