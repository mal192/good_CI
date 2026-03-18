#include <stdio.h>


int main(void){
	int mas[13] = {0};
	mas[0] = 12;
	for (int i = 0; i<13; i++){
		printf("%d\n", mas[i]);
	}
	
	size_t mas_count = sizeof(mas);
	printf("%lld ", mas_count);
	printf("%lld ", sizeof(mas)/sizeof(mas[0]));
	printf("%lld\n\n", sizeof(mas)/sizeof(*mas));
	
	
	char testMas[] = {1,2,3,4,5};
	int sizeTestMas = sizeof(testMas)/sizeof(*testMas);
		for (int i = 0; i<sizeTestMas; i++){
		printf("%d\n", testMas[i]);
	}
	printf("size testMas = %lld\n\n", sizeof(testMas)/sizeof(*testMas));
	
	
	char testMas2[15] = {1,[14] = 2, [13] = 3, [2] = 4, [10] = 5};
	int sizeTestMas2 = sizeof(testMas2)/sizeof(*testMas2);
		for (int i = 0; i<sizeTestMas2; i++){
		printf("%d\n", testMas2[i]);
	}
	printf("size testMas2 = %lld\n\n", sizeof(testMas2)/sizeof(*testMas2));
	return 0;
}