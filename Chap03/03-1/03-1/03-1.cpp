// 03-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main() {
	int n1 = 0;
	int n2 = 0;
	int sub = 0;
	int mul = 0;
	printf("두 개의 정수를 입력: ");
	scanf_s("%d, %d", &n1, &n2);
	sub = n1 - n2;
	mul = n1 * n2;
	printf("두 수의 뺄셈 = %d\n", sub);
	printf("두 수의 곱셈 = %d\n", mul);

}

