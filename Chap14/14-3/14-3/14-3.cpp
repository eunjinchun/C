// 14-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int SquareByValue(int num) {
	return num * num;
}

void SquareByReference(int * ptr) {
	int num = *ptr;
	*ptr = num * num;
}

int main()
{
	int num;
	printf("num의 제곱 출력. num: ");
	scanf_s("%d", &num);
	printf("%d\n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d\n", num);
    return 0;
}

