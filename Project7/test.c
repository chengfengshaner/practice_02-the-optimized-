//ȡ10������ƽ��ֵ(�Ż�)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//ʹ��һ��ѭ��������
		sum = sum + arr[i];
	}
	int avg = sum / 10;
	printf("avg = %d", avg);
	return 0;
}