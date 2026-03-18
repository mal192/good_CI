#include <stdio.h>


int main(void){
	int mas[] = {4,7,5,4,5,7,1,0,5,8};
	
	int sizeMas = sizeof(mas)/sizeof(*mas);
	printf("Size mas = %d\n", sizeMas);
	printf("mas[0] = %d\n", *mas);
	printf("mas: \n");
	//перебор массива с помощью указателя без длины
	for (int indexMas = 0; indexMas < sizeMas; indexMas++)
		printf("%d\n", *(mas+indexMas));
	
	int *pointMas = mas;
	printf("\nindex 5 = %d\n", *(pointMas+5));
	printf("%lld %lld\n",sizeof(mas), sizeof(pointMas) );
	
	7[pointMas] = 9999;
	printf("\nindex 8: %d %d %d\n",pointMas[7], 7[pointMas], *(pointMas+7));
	printf("\nindex 5: %d %d %d\n",mas[4], 4[mas], *(mas+4));
	
	return 0;
}