// counthigh.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int n = 0; //입력받을 숫자 수
	int max = 0, temp = 0;
	int arr[1000];

	printf("입력받을 숫자의 개수: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
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

