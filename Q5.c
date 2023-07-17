//다음은 제공된 아이스크림을 인원에 맞게 나누어 줄 때, 몇 개씩 나누어주는것이 적절한지를 출력하는 프로그램이다.
//이 때, 분배할 인원이 0인 경우 "잘못 입력하셨습니다." 를 출력하고 프로그램을 종료하는 코드를 작성하시오.

#include<stdio.h>

void div_ice(int num, double total);

int main()
{
	int num;
	double total;

	printf("분배 할 인원을 입력하세요: ");
	scanf_s("%d", &num);

	printf("아이스크림 개수를 입력하세요: ");
	scanf_s("%lf", &total);

	div_ice(num,total);

	return 0;
}

void div_ice(int num, double total)
{
	double portion;
	portion = total / num;

	if (num == 0)
	{
		printf("잘못 입력하셨습니다.");
		return;
	}
	printf("고객 1인당 %f개를 판매할 수 있습니다.\n", portion);
}