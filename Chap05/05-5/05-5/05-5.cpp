// 05-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char asc;
	printf("아스키 문자 입력: ");
	scanf_s("%c", &asc);
	printf("아스키 코드 값: %d\n", asc);

    return 0;
}

