#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double A, B;
	scanf("%lf%lf", &A, &B);
	printf("%.9lf", A / B);
	return 0;
}