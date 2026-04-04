#include <stdio.h>
#include <math.h>

float sq4(float x)
{
 float res = (x < 0) ?  NAN : pow(x, 0.25);
 return res;
}

float sq4v2(float x)
{
 if (x < 0) return NAN;
  return pow(x, 0.25);
}


int main(void){

printf("%0.3f\n", sq4(2.5));
printf("%0.3f\n", sq4(-2.5));
printf("%0.3f\n\n", sq4(0));	

printf("%0.3f\n", sq4v2(2.5));
printf("%0.3f\n", sq4v2(-2.5));
printf("%0.3f\n", sq4v2(0));	
	return 0;
}