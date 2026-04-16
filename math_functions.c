#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main17() {

	/*
		常见的数学函数
		- sqrt()、fab()、ceil()、floor()、fmod()[用于计算两个浮点数相除的余数]
	*/

	double num_sqrt = 100.0;
	double number_fab = -6.1;
	double number_ceil = 4.3;
	double number_floor = 8.9;
	double number_fmod1 = 5.1;
	double number_fmod2 = 2.1;

	printf("%.2lf的算术平方根是:%.2lf\n", num_sqrt, sqrt(num_sqrt));
	printf("%.2lf的绝对值是:%.2lf\n", number_fab, fabs(number_fab));
	printf("%.2lf向上取整之后的结果为:%.2lf\n", number_ceil, ceil(number_ceil));
	printf("%.2lf向下取整之后的结果为:%.2lf\n", number_floor, floor(number_floor));
	printf("fmod(%.2lf, %.2lf) = %.2lf\n", number_fmod1, number_fmod2, fmod(number_fmod1, number_fmod2));

	return 0;
}