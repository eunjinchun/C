// 03-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num = 0;
	printf("제곱을 출력합니다.\n");
	printf("정수 입력: ");
	scanf_s("%d", &num);
	printf("%d^2 = %d\n", num, num*num);
    return 0;
}

