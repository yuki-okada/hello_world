/*3つの関数を持つプログラム*/

#include<stdio.h>


int main(void)

{
	func2();			/*先に関数2を呼び出し*/
	printf("夢の跡");	/*「夢の跡」を表示*/

	return 0;
}

void	func2(void) /*関数2の内容のプログラム*/
{
	func1();		/*先に関数1を呼び出し*/
	printf("兵どもが");	/*「兵どもが」を表示*/

	return 0;
}
void	func1(void)
{
	printf("夏草や");

	return	0;
}
