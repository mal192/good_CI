#include <stdio.h>

int main(void)
{
	float mas1[100] = {1.8, 2.5, 6, 7.5, [99] = 0.99};
	float mas2[14] = {0};
	int sizeMas1 = sizeof(mas1)/sizeof(*mas1);
	int sizeMas2 = sizeof(mas2)/sizeof(*mas2);
	int countFor = (sizeMas1 < sizeMas2) ? sizeMas1 : sizeMas2;
	printf("count For = %d\n", countFor);

	for (int i = 0; i < countFor; i++ )
	{	
	mas2[i] = mas1[i];
	printf("%.3f ", mas2[i]);
	}
		printf("\n");
	for (int i = 0; i< sizeMas1; i++) {
	printf("%.2f", mas1[i]);
	printf(" ");
	}
	
	
	return 0;
	
}