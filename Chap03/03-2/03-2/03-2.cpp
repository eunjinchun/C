// 03-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num1, num2, num3;
	printf("세 개의 정수 입력: ");
	scanf_s("%d, %d, %d", &num1, &num2, &num3);
	printf("%d x %d + %d = %d\n", num1, num2, num3, num1*num2 + num3);
    return 0;
}

