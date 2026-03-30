#include <stdio.h>
#include <string.h>
//#define sizeStr 10

int main(void){

	char str1[10] = "String";
	char str2[12] = "String";
	
	char *pointStr1 = str1;
	char *pointStr2 = str2;

	int i = 0;
	for (; pointStr1[i]!='\0' && pointStr2[i]!='\0'; ++i ){
		if (pointStr1[i] != pointStr2[i])
		{
			printf("String simbol not =\n");
			return 0;
		}
		}
		
		if (pointStr1[i] != pointStr2[i])
		{
			printf("String length not =\n");
			return 0;
		}
		printf("Str1 == Str2\n");


// comparison 	string

	char strr1[10] = "StRingS";
	char strr2[12] = "StRingSQ";
	
 int res1;
 res1 = strcmp(strr1, strr2);
 
 int res2;
 res2 = strncmp(strr1, strr2, 7);
 
 printf("strr1 == strr2 %d %d\n", res1, res2);
 //0 - ==
 // -1 strr1 < strr2
 // 1 strr1 > strt2
 
 ////find "Fa*" string mass
 
 const char *strS[] = {"Fam", "fabrica", "Fatal", "Ruk", "Fabuca"};
 char findStr[10] = "Fa";
 char *pointFindStr = findStr;
 int countStrS = sizeof(strS)/sizeof(*strS);
printf("size strS = %d\n", countStrS);
for (int cycleI = 0; cycleI < countStrS; cycleI++)
{	
	if (strncmp(strS[cycleI], pointFindStr, 2) == 0)
	{
		printf("%s\n", strS[cycleI]);
	}
	
}
/// searching for a character in a string
//поиск символа в строке
char *reusltFind;

char findChar = '0';
char strNewFind[60] = "oOoOo0oOoOooO0oOoOOo0"; //length 5; right 7
printf("ansii %c = %d\n", findChar, (int)findChar);
char *pointstrNewFind = strNewFind;
reusltFind =  strchr(pointstrNewFind, findChar); //слева
if (reusltFind != NULL) {
	size_t resultStrchr = reusltFind - pointstrNewFind;
	printf("index length %c  = %lld\n",findChar, resultStrchr);
} 
else 
{
	printf("N0t char  \n");
}

reusltFind =  strrchr(pointstrNewFind, findChar); ///справо
if (reusltFind != NULL) {
	size_t resultStrRchr = strrchr(pointstrNewFind, findChar) - pointstrNewFind;
	printf("index right %c  = %lld\n",findChar, resultStrRchr);
}
else 
{
	printf("N0t char  \n");
}

///search for a line within a line
//поиск строки в строке
char strNewFind2[99] = "hello Fabrika";
char *pointStrNewFind2 = strNewFind2;
reusltFind = strstr(pointStrNewFind2 , pointFindStr);
if (reusltFind != NULL) {
	size_t resultFindStr = reusltFind - pointStrNewFind2;
	printf("resul find string %lld\n", resultFindStr);
}
else 
{
	printf("N0t string to string  \n");
}

///The search contains one of the characters in the string 
///Проверка: содержится ли хотя бы один из символов строки в строке
char findStr2[10] = "oP0";
char *pointFindStr2 = findStr2;
reusltFind = strpbrk(pointStrNewFind2 , pointFindStr2);
if (reusltFind != NULL) {
	size_t resultFindStr2 = reusltFind - pointStrNewFind2;
	printf("resul find string %lld\n", resultFindStr2);
}
else
{
	printf("N0t string to string 2  \n");
}
	return 0;
}