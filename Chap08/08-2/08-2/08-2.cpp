// 08-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int n1, n2;
	int sub = 0;
	printf("두 정수 입력: ");
	scanf_s("%d, %d", &n1, &n2);
	if (n1 < n2)
		sub = n2 - n1;
	else
		sub = n1 - n2;
	printf("차: %d\n", sub);
    return 0;
}

