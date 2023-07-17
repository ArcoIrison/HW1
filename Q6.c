//주문이 발생할 때 마다 판매한 커피의 수를 입력받은 후, 이를 활용하여 일간 커피의 총 판매량을 구하는 프로그램을 구현하고자 한다.
//이 때, 총 판매량의 계산은 주문받은 커피 수를 0으로 입력하였을 때 수행된다.
//다음 코드의 문제점을 기술한 후, 상기의 목적에 부합하는 코드로 수정하시오.

#include<stdio.h>

int main()
{
	int num = 0;
	int total = 0;
	
	printf("본 프로그램은 일간 커피의 총 판매량을 구하는 프로그램 입니다.\n");

	while (1)
	{
		printf("주문받은 커피 수를 입력하시오: ");
		scanf_s("%d", &num);
		if (num == 0)
			break;
		else if ( num != 0)
			total += num;
	}
	printf("오늘의 커피 총 판매량은 %d 잔입니다.\n", total);

	return 0;
}