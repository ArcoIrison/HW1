//다음은 주어진 수 n개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램이다. 소수는 1보다 큰 자연수 중 1과 자기 자신만을 
//첫줄에 수의 개수 n을 입력받고 다음으로 n개의 수를 입력받아 주어진 수들 중 소수의 개수를 출력하는 프로그램을
//구현하기 위해 빈 칸을 채우시오. (hint : 이중 for 문 사용)

#include<stdio.h>

int n;
int num, count = 0;

int main()
{
	printf("입력할 숫자의 개수를 말씀해주세요: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("숫자를 입력해주세요: ");
		scanf_s("%d", &num);
		int a = 1;
		for (int j = 2; j < num; j++)
		{
			if (num % j == 0)
			{
				a = 0;
				break;
			}
		}
		if (a && num > 1)
			count++;
	}
	printf("소수의 개수는 %d개 입니다.\n", count);

	return 0;
}