#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main5() {

	/*
		浮点类型函数
		- fmax()、fmin()、fdim()
		- fmax(a, b)函数, 求两者的最大值
		- fmin(a, b)函数, 求两者的最小值
		- fdim(a, b)函数, 返回两者的正差值，如果a<b，则返回值为0
	*/

	double float1 = 20.9;
	double float2 = 34.9;

	printf("fmax(%.2lf, %.2lf) = %.2lf\n", float1, float2, fmax(float1, float2));
	printf("fmin(%.2lf, %.2lf) = %.2lf\n", float1, float2, fmin(float1, float2));
	printf("fdim(%.2lf, %.2lf) = %.2lf\n", float1, float2, fdim(float1, float2));
	printf("fdim(%.2lf, %.2lf) = %.2lf\n", float2, float1, fdim(float2, float1));


	return 0;
}