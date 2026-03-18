#include <stdio.h>


int main(void){
	int mas[] = {4,7,5,4,5,7,1,0,5,8};
	
	int sizeMas = sizeof(mas)/sizeof(*mas);
	printf("Size mas = %d\n", sizeMas);
	printf("mas[0] = %d\n", *mas);
	printf("mas: \n");
	//перебор массива с помощью указателя без длины
	for (int indexMas = 0; indexMas < sizeMas; indexMas++){
		printf("%d\n", *(mas+indexMas));
		}
				printf("\n");
		
	const int *pointMas1 = mas;
	int * const pointMas2 = mas;
	
	
	pointMas2[0] = 1000;
	for (int indexMas = 0; indexMas < sizeMas; indexMas++){
		printf("%d\n", pointMas1[indexMas]);
		}
		
		printf("index 10 = %d\n\n", pointMas2[9]);
		
	for (int indexMas = 0; indexMas < sizeMas; indexMas++){
		printf("%d\n", *(pointMas2+indexMas));
		}	
			
//	pointMas2++; ошибка, без ошибки должно быть в 18 строке int * pointMas2 = mas;
	

	
	return 0;
}