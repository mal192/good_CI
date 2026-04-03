#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#define sizeStr 10

int main(void){
	float x = 2.5, w = 0.664, z = 15.168;
	char str[100];
	char format [] = "(w=%.2f, x=%.2f, z=%.2f)";
	sprintf(str, format, w, x, z);
	puts(str);
	
	char str2[100];
	char name[] = "World";
	sprintf(str2, "%.3s: %.2f %.2f %.2f",name, w, x, z);
	printf("%s\n", str2);
	
	/// int to str
	int number = -1351;
	char numberStr[10];
	sprintf(numberStr, "%d", number);
	
	int countStr = strlen(numberStr);
	for (int i = 0; i<countStr; i++)
	{
		printf("%c\n", numberStr[i]);
	}
	
	/// str to int (atoi)
	printf("%d\n", atoi(numberStr) - 1);
	
	/// str to long (atol)
	printf("%ld\n", atol(numberStr) - 10);	
	
	/// str to long long (atoll)
	printf("%lld\n", atoll(numberStr) - 50);	
	
	/// str to double  (atof)
	printf("%.3f\n", atof(numberStr) - 100 - 0.1598);		
	
	return 0;
}