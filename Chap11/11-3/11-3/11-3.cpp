// 11-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char str[100];
	int len = 0;

	printf("문자열 입력: ");
	scanf_s("%s", &str);
	
	while (str[len] != 0)
		len++;

	printf("문자열 길이: %d\n", len);

    return 0;
}

