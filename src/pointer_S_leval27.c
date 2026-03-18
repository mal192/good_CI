#include <stdio.h>

int main(void){

	int a = 300;
	int *point_a = &a;
	printf("a = %d; pointer a = %d	\n" ,a , *point_a);
	
	//присвоение типов указателей
	char *point_char = (char *)point_a;
	*point_char = 1;
	printf("a = %d; pointer a = %d	\n" ,a , *point_a);
	
	printf("\nHello Worlds\n");
}