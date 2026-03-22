#include <stdio.h>
//#define sizeStr 10

int main(void){
	char str[] = "\"Hell0 My Little Friend\"";
	int stringSize = sizeof(str)/sizeof(str[0]) - 1;
	printf("string size = %d\n", stringSize);

	return 0;
}