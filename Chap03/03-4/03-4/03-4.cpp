// 03-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int n1, n2;
	printf("두 정수 입력: ");
	scanf_s("%d, %d", &n1, &n2);
	printf("%d / %d\n", n1, n2);
	printf("몫 = %d, 나머지 = %d", n1 / n2, n1%n2);
    return 0;
}

