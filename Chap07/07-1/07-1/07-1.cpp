// 07-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	int i = 1;
	printf("양의 정수 입력: ");
	scanf_s("%d", &num);
	while (i <= num) {
		printf("Hello world!\n");
		i++;
	}
    return 0;
}

