// 05-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	double n1, n2;
	printf("두 개의 실수 입력: ");
	scanf_s("%lf, %lf", &n1, &n2);
	printf("두 수의 덧셈: %lf\n", n1 + n2);
	printf("두 수의 뺄셈: %lf\n", n1 - n2);
	printf("두 수의 곱셈: %lf\n", n1*n2);
	printf("두 수의 나눗셈: %lf\n", n1 / n2);
    return 0;
}

