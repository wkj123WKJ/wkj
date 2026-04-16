#include <stdio.h>
#include <inttypes.h>
#include <math.h>
#include <time.h>
#include <errno.h>


int main() {

	/*
		获得当前时间
	*/

	// 获得当前的时间戳
	time_t now = time(NULL);

	// 使用time()生成(1-100)随机数
	srand(time(NULL));
	printf("随机数字:%d\n", rand() % 100 + 1);

	// 转换成本地时间
	struct tm local_time;
	localtime_s(&local_time, &now);

	// 转换成协调时间 (UTC)
	struct tm utc_time;		// 特定结构体，用以存放时间数据
	gmtime_s(&utc_time, &now);

	char local_time_str[100];
	char utc_time_str[100];

	strftime(local_time_str, sizeof(local_time_str), "%Y-%m-%d %H:%M:%S", &local_time);
	strftime(utc_time_str, sizeof(utc_time_str), "%Y-%m-%d %H:%M:%S", &utc_time);

	printf("打印本地时间:%s\n", local_time_str);
	printf("打印UTC时间:%s\n", utc_time_str);


	return 0;
}