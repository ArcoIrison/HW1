//������ ������ ���̽�ũ���� �ο��� �°� ������ �� ��, �� ���� �������ִ°��� ���������� ����ϴ� ���α׷��̴�.
//�� ��, �й��� �ο��� 0�� ��� "�߸� �Է��ϼ̽��ϴ�." �� ����ϰ� ���α׷��� �����ϴ� �ڵ带 �ۼ��Ͻÿ�.

#include<stdio.h>

void div_ice(int num, double total);

int main()
{
	int num;
	double total;

	printf("�й� �� �ο��� �Է��ϼ���: ");
	scanf_s("%d", &num);

	printf("���̽�ũ�� ������ �Է��ϼ���: ");
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
		printf("�߸� �Է��ϼ̽��ϴ�.");
		return;
	}
	printf("�� 1�δ� %f���� �Ǹ��� �� �ֽ��ϴ�.\n", portion);
}