// n2nprime.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr[100];
	int count = 0;
	int detailcount = 0;
	int j = 0;

	do {
		scanf_s("%d", &arr[count]);
		count++;
	} while (arr[count] != 0);
	
	for (int i = 0; i <= count; i++) {
		detailcount = 0;
		for (j = 2; j <= arr[i]; j++) {
			if (arr[i] % j == 0) {
				break;
			}
		}
		if (arr[i] == j) {
			detailcount++;
		}
		printf("%d\n", detailcount);
	}
	
    return 0;
}

