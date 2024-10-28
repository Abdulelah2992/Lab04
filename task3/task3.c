#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	int x , y,i,j ;
	srand(time(NULL));
	x = (rand()%(9-0+1)+0);
	y = (rand()%(9-0+1)+0);
	printf("x = %d , y = %d \n",x,y);
	int matrix[10][10];
 	for(i=0 ; i < x ; i++) {
		for (j=0 ; j<y ; j++) {
		}
	}
	printf("Hurrah!! , I have found the hidden treasure it is in location %d,%d \n",i,j);
	return 0;
}
