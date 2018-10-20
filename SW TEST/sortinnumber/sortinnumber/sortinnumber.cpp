// sortinnumber.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int n = 0; //숫자 입력
	int len = 0, i = 1;
	int temp = 0;
	int arr[100];

	printf("숫자 입력: ");
	scanf_s("%d", &n);

	while (n > i) {
		i *= 10;
		len++;
	}
	//printf("%d\n", len);

	for (int i = len - 1; i >= 0; i--) {
		arr[i] = n % 10;
		n /= 10;
	}

	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
    return 0;
}

