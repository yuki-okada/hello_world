#include<stdio.h>

int main(void)
{
	float	a;
	float	b;


	printf("一つ目の浮動小数点数を入力してください。\n");
	scanf_s("%f", &a);

	printf("二つ目の浮動小数点数を入力してください。\n");
		scanf_s("%f", &b);

		printf("二つの値の合計は%fです。",a+b);

	return	0;
}