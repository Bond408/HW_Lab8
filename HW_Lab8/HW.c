#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void)
{
	setlocale(LC_ALL, "RUS");
	float a, n;
	float k = 0;
	int q = 1;
	printf("������� �������� a: ");
	scanf_s("%f", &a);
	printf("������� �������� n: ");
	scanf_s("%f", &n);
	for (q; q <= pow(2, n); q *= 2) 
	{
		k += 1 / pow(a, q);
	}
	printf("�����: %f", k);
}