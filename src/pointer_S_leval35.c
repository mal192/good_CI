#include <stdio.h>
//#define 

int main(void){
	char str[] = "B\"a\"l\
Lu";
	int sizeStr = sizeof(str)/sizeof(*str) - 1;
	puts(str);
	printf("string size = %d\n", sizeStr);
	
	short i = 0;
	char enD;
	do {
		printf("%c\n", str[i]);
		i = i + 1; 
		enD = str[i];
		} while (enD != 0);

	return 0;
}