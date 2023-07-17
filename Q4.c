//세 개의 정수를 입력받고 입력받은 숫자 중에서 최댓값과 최솟값을 판별하는 
//함수를 구현하고 그 결과를 출력하는 프로그램을 작성할 때, 빈칸을 채우시오

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int Max_num(int a,int b, int c);
int Min_num(int a,int b, int c);


int main()
{
	int a, b, c;
	printf("3개의 정수를 입력하세요: ");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("최대값: %d, 최소값: %d", Max_num(a, b, c), Min_num(a, b, c));

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