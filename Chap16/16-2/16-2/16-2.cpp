// 16-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arra[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arrb[4][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++)
			arrb[j][i] = arra[i][j];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++)
			printf("%d ", arrb[i][j]);
		printf("\n");
	}
    return 0;
}

