//���� ���α׷��� ��� ����� �����ΰ�?

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