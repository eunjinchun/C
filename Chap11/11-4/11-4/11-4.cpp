// 11-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char str[100];
	int len = 0;
	char temp;
	printf("문자열 입력: ");
	scanf_s("%s", &str);
	while (str[len] != 0)
		len++;
	for (int i = 0; i < len / 2; i++) {
		temp = str[i];
		str[i] = str[(len - i) - 1];
		str[(len - i) - 1] = temp;
	}
	printf("뒤집힌 문자열: %s\n", str);
    return 0;
}

