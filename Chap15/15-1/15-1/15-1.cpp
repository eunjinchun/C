// 15-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void odd(int * arr) {
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0)
			printf("%d, ", arr[i]);
	}
}

void even(int * arr) {
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}
}

int main()
{
	int arr[10];
	printf("배열에 저장될 10개의 정수 입력: ");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);
	odd(arr);
	printf("\n");
	even(arr);
	printf("\n");
    return 0;
}

