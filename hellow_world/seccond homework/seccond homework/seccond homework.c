#include<stdio.h>

int main(void)
{
	int num;
	float	f;


	printf("整数を入力してください。\n");
	scanf_s("%d", &num);

	printf("浮動小数点数を入力してください。\n");
		scanf_s("%f", &f);

		printf("%d,%f", num, f);

	return	0;
}