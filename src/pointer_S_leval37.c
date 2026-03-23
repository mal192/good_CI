#include <stdio.h>
#include <string.h>
//#define sizeStr 10

int main(void){
	char str[] = "\"Hell0 My Little Friend\"";
	int stringSize = sizeof(str)/sizeof(str[0]) - 1;
	printf("string size = %d\n", stringSize);
	
	///----copy new string
	printf("\ncopy string:\n");
	char newSt[12];
	int indexStr = sizeof(newSt)/sizeof(newSt[0]);
	const char *pointStr = str;
	char *pointNewStr = newSt;
	while (*pointStr!='\0' && indexStr-- > 1)
	{
		*pointNewStr++ = *pointStr++;
	}
	*pointNewStr++ = '\0';
  	printf("newStr = %s <-/ length 12\n", newSt);
	
	///----copy new string "strncpy" <string.h>
	char newStr2[13];
	
	int sizeNewStr2 = sizeof(newStr2) - 1;
	strncpy(newStr2, str, sizeNewStr2);
	newStr2[sizeNewStr2] = '\0';
	printf("newStr2 = %s <-/ length 13\n", newStr2);
	
	///----copy new string "strcpy" <string.h>
	char newStr3[14];
	int sizeNewStr3 = sizeof(newStr3) - 1;
	strcpy(newStr3, str); /// error copy length
	newStr2[sizeNewStr3] = '\0';
	printf("newStr3 = %s <-/ length 14\n\n", newStr3);
	
	///function length:
	printf("\nlength:\n");
	char str0[1000] = "\"Hell0 My Little Friend\"";
	int str0SizeOf = sizeof(str0)-1; /// - \0
	printf("sizeOF = %d\n", str0SizeOf);
	
	char *pointStr0 = str0;
	int countStr0 = 0;
	while (*pointStr0++ !=0) 
	{
		countStr0++;
	}
	printf("size str0 NOT \\0 = %d\n", countStr0);
	///function length string.h:
	size_t countStr00 = strlen(str0);
	printf("size str0 NOT \\0 = %lld\n", countStr00);
	
	///function concatenation
	char str01[9] = "Hello";
	char str02[20] = "W0rlD";
	strcat(str01, str02);
	printf("\nconcat = %s\n", str01);
	
	char str001[9] = "Hello";
	char str002[20] = "W0rlD";
	size_t maxAdd = sizeof(str001) - 1 - strlen(str001);
	strncat(str001, str002, maxAdd);
	str001[sizeof(str001)-1] = '\0';
	printf("\nconcat = %s\n", str001);
	
	
	


	return 0;
}