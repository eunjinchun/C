// 15-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void DesSort(int arr[]) {
	int i, j, temp;

	for (i = 0; i < 7; i++) {
		for (j = 0; j < (7 - i) - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[7];
	
	printf("7개의 정수 입력: ");
	for (int i = 0; i < 7; i++)
		scanf_s("%d", &arr[i]);

	DesSort(arr);
	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	printf("\n");
    return 0;
}

