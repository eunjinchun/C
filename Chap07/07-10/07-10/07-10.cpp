// 07-10.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num1, num2;
	int sum = 0;

	printf("두 정수 사이의 수 덧셈\n");
	printf("두 개의 정수 입력: ");
	scanf_s("%d, %d", &num1, &num2);

	for (int i = num1; i <= num2; i++) {
		sum += i;
	}
	printf("합: %d\n", sum);
    return 0;
}

