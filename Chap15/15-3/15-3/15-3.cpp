// 15-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr[10];
	int result[10];
	printf("10개의 정수 입력: ");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);

	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			result[i] = arr[i];
			printf("%d ", result[i]);
		}
	}

	for (int i = 9; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			result[i] = arr[i];
			printf("%d ", result[i]);
		}
	}
    return 0;
}

