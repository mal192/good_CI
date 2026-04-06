#include <stdio.h>
#include <math.h>

float min2(float x, float y);

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

float min2(float x, float y)
{
	return (x < y) ? x : y;
}

float min3(float x, float y, float z)
{
	float tempXY = (x < y) ? x : y;
	return (z < tempXY) ? z : tempXY;
}

float min3New(float x, float y, float z)
{
	return (z < min2(x, y)) ? z : min2(x, y);
}

int main(void){

	printf("%0.3f\n", sq4(2.5));
	printf("%0.3f\n", sq4(-2.5));
	printf("%0.3f\n\n", sq4(0));	

	printf("%0.3f\n", sq4v2(2.5));
	printf("%0.3f\n", sq4v2(-2.5));
	printf("%0.3f\n\n", sq4v2(0));	

	printf("min2: %0.3f\n", min2(1.2, 10.2));
	printf("min3: %0.3f\n", min3(-0.1, 1.2, 10.2));
	printf("min3New: %0.3f\n", min3New(-0.1, 1.2, 10.2));
	printf("min3_2: %0.3f\n", min2(-0.1, min2(1.2, 10.2)));

	printf("min4: %0.3f\n", min2(min2(0.2, -10.2), min2(1.2, 10.2)));
	printf("min5: %0.3f\n", min2(min2(0.2, -10.2), min3(1.2, 10.2, -99.8)));
//----

	float x = 10;
	/// error to gcc -Wall -Werror -Wextra
	printf ("%0.1f\n", min2(++x, x));	//11
	 x = 10;
	printf ("%0.1f\n", min2(x++, x));	//10
	return 0;
}