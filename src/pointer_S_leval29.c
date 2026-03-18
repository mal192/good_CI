#include <stdio.h>


int main(void){
	int mas[13];
	mas[0] = 12;
	for (int i = 0; i<13; i++){
		printf("%d\n", mas[i]);
	}
	printf("\n%lld\n", sizeof(mas));
	return 0;
}