#include <stdio.h>


int main(void){

	int a = 300;
	int *point_a = &a;
	
	printf("size int = %lld\n", sizeof(int));
	printf("pointer a = %p\n", point_a);
	point_a++;
	printf("pointer a = %p\n", point_a);
//	printf("a = %d; pointer a = %u	\n" ,a , point_a++);

	int arrayA[10];
	int *point_arrA = &arrayA[0];
	int *newP = &arrayA[3];
	char itemIndex = newP - point_arrA;
	printf("index item = %d\n", itemIndex);
	
	//побайтный перебор числа
	int tempInt = 476789;
	char *byteInt = (char *)&tempInt;
	for (unsigned int i=0; i<sizeof(int); i++ )
	{
		printf(" %d", *byteInt);
		byteInt++;
	}

	
	return 0;
}