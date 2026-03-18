#include <stdio.h>
#define SIZEm 3

int main(void){
	int mas[SIZEm][SIZEm] = {0,1,2,3};  //ERROR if gcc -Wall -Werror -Wextra 
	for (short y=0; y < SIZEm; y++){
		for (short x=0; x<SIZEm; x++){
			printf("%d ", mas[y][x]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int masN[SIZEm][SIZEm] = {{0,1},{2,3},{[2] = 99}};
	for (short y=0; y < SIZEm; y++){
		for (short x=0; x<SIZEm; x++){
			printf("%d ", masN[y][x]);
		}
		printf("\n");
	}
	printf("\n");
	
	char tests[10][4] = {0};
	char *testsP = &tests[0][0];
	for (int i=0;i<10*4;i++) *(testsP + i) = i; //запись
	for (short y=0; y < 10; y++){
		for (short x=0; x<4; x++){
			printf("%d ", tests[y][x]);
		}
		printf("\n");
	}
	printf("\n");
	int countY = sizeof(tests)/sizeof(*tests);
	int countX =sizeof(tests[0])/sizeof(tests[0][0]);
		
	int sizeTestsByte = sizeof(tests)/sizeof(char);
	printf("\nsizeByte = %d\n",sizeTestsByte);
	printf("countY = %d\n", countY);
	printf("countX = %d\n", countX);
		
	//point 
	char *testrPoint = tests[0]; //тоже что и &tests[0][0];
	for (int y = 0; y<10;y++) printf("%d ",*(testrPoint + y));
	//for (int y = 0; y<10;y++) printf("%d ",tests[y]);
	printf("\n");
	printf("\n");
	//point to Y
	char (*testsPointY)[4] = tests; //указатель на двумерный массив
	for (short y=0; y < 10; y++){
		for (short x=0; x<4; x++){
			printf("%d ", testsPointY[y][x]);
		}
		printf("\n");
	}
	// print 0 Y
	printf("\n");
	int indexY = 0;
	for (int y = 0; y<10;y++) printf("%d ",*(testrPoint + y*countX + indexY));
	
	printf("\n");
	indexY = 3;
	for (int y = 0; y<10;y++) printf("%d ",*(testrPoint + y*countX + indexY));
		
	
	return 0;
}