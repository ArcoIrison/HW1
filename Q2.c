// ���� ���� N ������ K�� ����� ��� ����ϴ� �ڵ带 �Ʒ� BOX���� �ϼ��Ͻÿ�.

#include<stdio.h>

int main()
{
	int n, k;
	int a = 1;

	printf("�ִ� ���� ���� �Է�: ");
	scanf_s("%d", &n);

	printf("����� ã�� k�� �Է�: ");
	scanf_s("%d", &k);

	printf("n ������ k ����� ã�ƺ��� =>");
	
	for (a = 1; a * k < n; a++)
		printf("%d ", a * k);

	printf("\n");

	system("pause");

	return 0;
}