// 양의 정수 N 이하인 K의 배수를 모두 출력하는 코드를 아래 BOX에서 완성하시오.

#include<stdio.h>

int main()
{
	int n, k;
	int a = 1;

	printf("최대 양의 정수 입력: ");
	scanf_s("%d", &n);

	printf("배수를 찾을 k를 입력: ");
	scanf_s("%d", &k);

	printf("n 이하의 k 배수를 찾아보자 =>");
	
	for (a = 1; a * k < n; a++)
		printf("%d ", a * k);

	printf("\n");

	system("pause");

	return 0;
}