// 07-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int dan;
	int i = 9;
	printf("몇 단? ");
	scanf_s("%d", &dan);
	while (i > 0) {
		printf("%d x %d = %d\n", dan, i, dan*i);
		i--;

	}
    return 0;
}

