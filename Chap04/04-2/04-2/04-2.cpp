// 04-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num = 3;
	num = num << 3; // 3*8
	num = num >> 2; //(3*8)나누기 4의 나머지
	printf("%d\n", num);
    return 0;
}

