#define _USE_MATH_DEFINES	// 使用M_PI的预定义，必须以放到引入头文件之前
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main14(void) {

	/*
		- sqrt()函数
		- 三角函数
		- M_PI
	*/

	double input_angel = 0.0;
	double sin_result = 0.0;
	double cos_result = 0.0;
	double tan_result = 0.0;

	printf("请输入一个角度(度°):\n");
	scanf_s("%lf", &input_angel);

	printf("该角度的弧度值为:%.2lfΠ\n", input_angel / 180.0);

	printf("该角度的正弦值为:%.2lf\n", sin(input_angel * (M_PI / 180.0)));
	printf("该角度的余弦值为%.2lf\n", cos(input_angel * (M_PI / 180.0)));
	printf("该角度的正切值为%.2lf\n", tan(input_angel * (M_PI / 180.0)));

	printf("该角度的反正弦值为:%.2lf\n", asin(input_angel * (M_PI / 180.0)));
	printf("该角度的反余弦值为%.2lf\n", acos(input_angel * (M_PI / 180.0)));
	printf("该角度的反正切值为%.2lf\n", atan(input_angel * (M_PI / 180.0)));

	double number;
	printf("请输入一个待开平方的数:\n");
	scanf_s("%lf", &number);
	printf("%.2lf的算术平方根是%.2lf\n", number, sqrt(number));


	return 0;
}