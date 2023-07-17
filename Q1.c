//다음 중첩 for문의 올바른 실행 순서를 작성하시오.

#include<stdio.h>

int main()
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 1; j < 3; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	
	return 0;
}