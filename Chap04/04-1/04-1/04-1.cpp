// 04-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	num = ~num;
	num = num+1;
	printf("부호를 바꾼 결과: %d\n", num);
    return 0;
}

