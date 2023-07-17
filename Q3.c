//다음 프로그램의 출력 결과는 무엇인가?

#include<stdio.h>

void sum(void);

int main()
{
	sum();
	sum();
	return 0;
}

void sum(void)
{
	static int a = 10;
	int b = 20;

	a++; b++;
	printf("a = %d, b = %d\n", a, b);
}