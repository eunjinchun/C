// primenum.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int n = 0; //입력받을 숫자 개수
	int count = 0;
	int i, j;
	int arr[100];

	printf("입력받을 숫자 갯수: ");
	scanf_s("%d", &n);

	for (int k = 0; k < n; k++) {
		scanf_s("%d", &arr[k]);
	}
	for (i = 0; i < n; i++) {
		for (j = 1; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				break;
			}	
		}
		if (arr[i] == j) {
			count++;
		}
	}
	printf("%d\n", count);
    return 0;
}

