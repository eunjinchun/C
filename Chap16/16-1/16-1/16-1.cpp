// 16-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr[3][9];
	
	printf("구구단 배열 저장 예제\n");

	for (int i = 2; i <= 4; i++) {
		for (int j = 1; j <= 9; j++) {
			arr[i - 2][j - 1] = i * j;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
    return 0;
}

