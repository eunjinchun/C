// 08-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int dan=1, i=1;
	for (dan = 1; dan < 10; dan++) {
		if (dan % 2 != 0)
			continue;
		for (i = 1; i < 10; i++) {
			if (dan < i)
				break;
			printf("%d x %d = %d\n", dan, i, dan*i);
		}
		printf("\n");
	}
    return 0;
}

