#include <stdio.h>
#define SIZEM 5

void printPole(const char (*p)[SIZEM])
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

void recMas(const char (*p)[SIZEM], char (*pPr)[SIZEM], int y, int x)
{
	if (p[y][x] != 0 || pPr[y][x] == 1)
	{	
		return;
	}
	pPr[y][x] = 1;
	
	
	if (y < (SIZEM-1))
	{
		recMas(p, pPr, y + 1, x);
	}
	if (y > 0)
	{
		recMas(p, pPr, y - 1, x);
	}
	
	if (x < (SIZEM-1))
	{
		recMas(p, pPr, y, x + 1);
	}
	if (x > 0 ) 
	{
		recMas(p, pPr, y, x - 1);
	}
	
}

int main(void){
	
	prReC(4);
	printf("\n");
	const char pole[][SIZEM] = {{1, 1, 1, 1, 1}, {1, 1, 0, 1, 1}, {0, 0, 0, 0, 1}, {1, 1, 0, 0, 0}, {1, 1, 0, 1, 1}};
	char PrintPole[SIZEM][SIZEM] = {0};
	printPole(PrintPole);
	printPole(pole);
	printf("function:\n");
	recMas(pole, PrintPole,  2, 2);
	printf("print:\n");
	printPole(PrintPole);
	return 0;
}