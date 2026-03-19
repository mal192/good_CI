#include <stdio.h>
//#define sizeStr 10

int main(void){
	char str[] = "B\"a\"l\
Lu";
	int sizeStr = sizeof(str)/sizeof(*str) - 1;
	puts(str);
	printf("\nstr = %s\n", str);
	printf("string size = %d\n", sizeStr);
	
	char inputStr[10];
	//scanf("%9s", inputStr); //ограничение ввода 9 символами
	fgets(inputStr,sizeof(inputStr),stdin);
	
	int inputStrSize = sizeof(inputStr)/sizeof(*inputStr) - 1;
	
	short i = 0;
	char enD;
	do {
		printf("%c\n", inputStr[i]);
		i = i + 1; 
		enD = inputStr[i];
		} while (enD != 0);
	printf("\nstring size = %d - %d\n", inputStrSize, i);
	
	char input2[10];
	int input2_size = sizeof(input2)/sizeof(*input2);
	char readLN;
	 i = 0;
	while ((readLN = getchar()) != '\n' && i < input2_size-1 && readLN!=EOF){
		input2[i++] = readLN;
	}
	input2[i] = '\0';
	puts(input2);
	printf("size input2 = %d - %d\n", input2_size, i);
	
	for (int q = 0; q<input2_size; q++)printf("%c",input2[q]);
	return 0;
}