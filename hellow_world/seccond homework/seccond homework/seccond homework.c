#include<stdio.h>
#include<math.h>	/*sqrt()を使うために必要*/

int main(void)
{
	double	answer;

	answer = sqrt(10.0);	/*sqrt(A)はAの平方根の値を返す関数*/
	printf("%f", answer);

	return 0;
}