#include "stdafx.h"


int main()
{
	int n = 0; //숫자 갯수
	int arr[100];
	int temp = 0; //임시 숫자 저장 변수

	printf("몇 개 입력? ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("\n%d\n", arr[i]);
	}

    return 0;
}

