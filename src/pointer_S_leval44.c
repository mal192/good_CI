#include <stdio.h>
#define SIZEF 15

int sqRect (int width, int height)
{
	return width*height;
}

void printMas(int mas[], int countMas)
{
	for (int cycleFiltrMas = 0; cycleFiltrMas < countMas; cycleFiltrMas++) 
	{
		printf("%d ", mas[cycleFiltrMas]);
	}
	printf("\n");
}

void filtMasF(int mas[], int countMas, int newMas[], int sizeFiltr, int (*functionFiltr)(int))
{
	for (int cycleFiltrMas = 0; cycleFiltrMas < sizeFiltr; cycleFiltrMas++) 
	{
		newMas[cycleFiltrMas] = 0;
	}
	
	for (int cycleMas = 0, cycleFiltrMas = 0; cycleMas < countMas; cycleMas++)
	{
		if (functionFiltr(mas[cycleMas]) == 1)
		{
			newMas[cycleFiltrMas++] = mas[cycleMas];
		}
	}
}

int funcEven(int numbs)
{
	return numbs % 2 == 0;
	//if (numbs % 2 == 0) return 1;
//	return 0;
}

int funcNoEven(int numbs)
{
	if (numbs % 2 != 0) return 1;
	return 0;
}

int funcPositiv(int numbs)
{
	if (numbs > 0) return 1;
	return 0;
}

int funcNegativ(int numbs)
{
	if (numbs < 0) return 1;
	return 0;
}

int main(void){
	//point on function 
	int (*pointSqRect) (int, int);
	pointSqRect = sqRect;
	
	printf("point function: %p\n" ,sqRect);
	printf("start function point %d\n", pointSqRect(10, 15));
	
	int mas[] = {1, 2, 3, -1, -2, -3, -4, 4, 18, 20, 99, 66, 57};
	int countMas = sizeof(mas)/sizeof(*mas);
	int masFilt[SIZEF];

	printf("mas count %d:\n" , countMas);
	printMas(mas, countMas);

	printf("\nmas filter evens:\n");
	filtMasF(mas, countMas, masFilt, SIZEF, funcEven);
	printMas(masFilt, SIZEF);
	
	
	printf("\nmas filter Not evens:\n");
	filtMasF(mas, countMas, masFilt, SIZEF, funcNoEven);
	printMas(masFilt, SIZEF);
	
	printf("\nmas filter positive:\n");
	filtMasF(mas, countMas, masFilt, SIZEF, funcPositiv);
	printMas(masFilt, SIZEF);
	
	printf("\nmas filter negative:\n");
	filtMasF(mas, countMas, masFilt, SIZEF, funcNegativ);
	printMas(masFilt, SIZEF);
	
	
	/////new ob
	int (*funtionsNumber[]) (int) = {funcEven, funcNoEven, funcPositiv, funcNegativ};
	int countFunctions = sizeof(funtionsNumber)/sizeof(*funtionsNumber);
	printf("count functions: %d\n", countFunctions);
	for (int i = 0; i<countFunctions; i++)
	{
		filtMasF(mas, countMas, masFilt, SIZEF, funtionsNumber[i]);
		printMas(masFilt, SIZEF);
	}
	
	printf("\n");
	return 0;
}