// 17-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void MaxAndMin(int *arr, int size, int **mxptr, int **mnptr) {
	int *max, *min;

	max = min = &arr[0];
	for (int i = 0; i < size; i++) {
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}
	*mxptr = max;
	*mnptr = min;
}

int main()
{
	int *maxptr;
	int *minptr;
	int arr[5];

	for (int i = 0; i < 5; i++) {
		printf("정수 입력:\n");
		scanf_s("%d", &arr[i]);
	}
	MaxAndMin(arr, sizeof(arr)/sizeof(int), &maxptr, &minptr);
	printf("최대: %d, 최소: %d\n", *maxptr, *minptr);

    return 0;
}

