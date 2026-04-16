#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main16(void) {

	/*
		- exp(n): e的n次方
		- log(n): 以e为底n的对数
		- log10(n): 以10为底n的对数
	*/

	double e = 2.7128;
	double number = 10.0;

	printf("log(%lf) = %.2lf\n", e, log(e));
	printf("exp(%.2lf) = %lf\n", 1.0, exp(1));
	printf("log10(%.2lf) = %lf\n", number, log10(number));

	return 0;
}