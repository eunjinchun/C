// 03-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num1, num2, num3;
	int result;
	printf("세 정수 입력: ");
	scanf_s("%d, %d, %d", &num1, &num2, &num3);
	result = (num1 - num2)*(num2 + num3)*(num3%num1);
	printf("연산 결과: %d\n", result);
    return 0;
}

