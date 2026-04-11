#include <stdio.h>
#define COOLS 4

void composit(int *x, int *k)
{
	*x = *x * *k;
}

void swapS(int *a, int *b)
{
	int tempA = *b;
	*b = *a;
	*a = tempA;
}

int sumMas (const int* mas, int len)
{	
 int sum = 0;
 for (int i=0; i<len; i++)
 {
	sum += mas[i];
 }
 return sum;
}

int sumMas2 (const int mas[], int len)
{	
 int sum = 0;
 for (int i=0; i<len; i++)
 {
	sum += mas[i];
 }
 return sum;
}

const char * serchSimbol( char * str, char cSerc, int *indexSerch)
{
	char * tempPoint = str;
	while (*str !='\0')
	{
		if (*str == cSerc)
		{
			*indexSerch = str - tempPoint;
			return str;
		}
		str ++;
	}
	return str;
}

void printf2D(const int (*mas2D)[COOLS], int rows)
{	
	for (int iRows = 0; iRows < rows; iRows++)
	{
		for (int iCol = 0; iCol < COOLS; iCol++ )
		{
		printf("%d ", mas2D[iRows][iCol]);
		}
		printf("\n");
	}

}


int main(void){
	
	int x = 5;
	int k = 10;
	swapS(&x, &k);
	printf("composition: %d * %d = ", x ,k);
	composit(&x, &k);
	printf("%d\n", x);
	int mas[5] = {15, 1, 3, 4, 8};
	int lenMas = sizeof(mas)/sizeof(mas[0]);
	printf("length mas = %d\n", lenMas);
	printf("sum mas ");
	for (int i=0; i < lenMas; i++)
	{
		printf(" %d", mas[i]);
	}
	printf(" = %d\n", sumMas(mas, 5));
	printf("%d\n", sumMas2(mas, 5));
	
	char str[] = "Hell0 World";
	int indexSerch = 0;
	char serchChar = 'H';
	printf("search point = %dll  ", *serchSimbol(str, serchChar, &indexSerch));
	printf("serch index = %d\n", indexSerch);
	
	
	int mas2D [][COOLS] = {{1,2,3,4}, {11,22,33,44}, {111,222,333,444}, {-1, -2, -3, -4}, {-9,-8,-7,-6}};
	int rows = sizeof(mas2D)/sizeof(*mas2D);
	printf("%d	%d\n", mas2D[0][0], rows);
	printf2D(mas2D, rows);
	
	
	return 0;
}