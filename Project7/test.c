//取10个数求平均值(优化)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//使用一次循环还进行
		sum = sum + arr[i];
	}
	int avg = sum / 10;
	printf("avg = %d", avg);
	return 0;
}