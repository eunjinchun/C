// 08-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	printf("1이상 100미만의 정수 중, 7/9의 배수 출력\n");
	for (int i = 1; i < 100; i++) {
		if (i % 7 == 0 || i % 9 == 0) {
			printf("%d\n", i);
		}
	}
    return 0;
}

