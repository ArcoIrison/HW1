//�� ���� ������ �Է¹ް� �Է¹��� ���� �߿��� �ִ񰪰� �ּڰ��� �Ǻ��ϴ� 
//�Լ��� �����ϰ� �� ����� ����ϴ� ���α׷��� �ۼ��� ��, ��ĭ�� ä��ÿ�

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int Max_num(int a,int b, int c);
int Min_num(int a,int b, int c);


int main()
{
	int a, b, c;
	printf("3���� ������ �Է��ϼ���: ");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("�ִ밪: %d, �ּҰ�: %d", Max_num(a, b, c), Min_num(a, b, c));

	return 0;
}

int Max_num(int a, int b, int c)
{
	int max = 0;

	if (a > b && a > c) max = a;
	else if (b > a && b > c) max = b;
	else if (c > a && c > b) max = c;
	
	return max;
}

int Min_num(int a, int b, int c)
{
	int min = 0;

	if (a < b && a < c) min = a;
	else if (b < a && b < c) min = b;
	else if (c < a && c < b) min = c;
	
	return min;
}