#include <stdio.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int N, K;
	float n, k;
	N = 21;
	K = 5;
	n = 21;
	k = 5;


	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("��� %d ������ �����\n", K);
	printf("�� �������� �������� %d ����� � %d �����\n", 24 - N, 60 - K);
	printf("C 8.00 ������ %d ������\n", (N - 8) * 60 * 60);
	printf("������� ��� %f ����� � ������� ������ = %f\n", n / 24, k / 60);
}