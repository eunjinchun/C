// 07-8.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int i = 0;
	int sum = 0;
	do {
		sum += i;
		i+=2;
	} while (i <=100);
	printf("덧셈 결과: %d\n", sum);
    return 0;
}

