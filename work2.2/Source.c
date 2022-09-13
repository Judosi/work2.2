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


	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идёт %d минута суток\n", K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - K);
	printf("C 8.00 прошло %d секунд\n", (N - 8) * 60 * 60);
	printf("Текущий час %f суток и текущая минута = %f\n", n / 24, k / 60);
}