#include <stdio.h>
#define SIZEM 5

void printPole(char (*p)[SIZEM])
{
	for (int y = 0; y < SIZEM; y++)
	{
		for (int x = 0; x < SIZEM; x++)
		{
			printf("%c", (p[y][x] == 0) ? '#' : '@');
		}
		printf("\n");
	}

}

void prReC(int i) //recursive function
{
	printf("start: %d\n", i);
	if (i>1)
	{
		prReC(--i); // if i-- then cirularity
	}
	printf("end: %d\n", i);
}

int main(void){
	
	prReC(4);
	printf("\n");
	char pole[][SIZEM] = {{1, 1, 1, 1, 1}, {1, 1, 0, 1, 1}, {0, 0, 0, 0, 1}, {1, 1, 0, 0, 0}, {1, 1, 0, 1, 1}};
	char PrintPole[SIZEM][SIZEM] = {0};
	printPole(PrintPole);
	printPole(pole);
	
	return 0;
}