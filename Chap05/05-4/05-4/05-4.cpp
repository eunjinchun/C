// 05-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	printf("아스키코드 출력을 위한 코드입니다. \n");
	printf("정수 입력: ");
	scanf_s("%d", &num);
	printf("아스키 문자: %c\n", num);
    return 0;
}

