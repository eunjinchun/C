// 15-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string.h>

int strlen(char *arr) {
	int i = 0;
	while (arr[i] != 0)
		i++;
	return i - 1;
}

int main(void) {
	char arr[100];
	int len, result = 1;

	printf("문자열 입력: ");
	scanf_s("%s", &arr);

	len = strlen(arr);

	for (int i = 0; i < len; i++) {
		if (arr[i] != arr[len - 1]) {
			printf("회문이 아닙니다.\n");
			return 0;
		}
	}
	printf("회문입니다.\n");

	return 0;
}
