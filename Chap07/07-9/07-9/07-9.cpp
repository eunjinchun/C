// 07-9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int dan = 2;
	int i= 1;

	do {
		int i = 1;
		while (i <= 9) {
			printf("%d x %d = %d\n", dan, i, dan*i);
			i++;
		}
		printf("\n");
		dan++;
	} while (dan <= 9);
    return 0;
}

