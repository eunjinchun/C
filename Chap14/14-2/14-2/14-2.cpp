// 14-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void Swap(int * ptr1, int * ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d\n", num1, num2);
	Swap(&num1, &num2);
	printf("num1 num2: %d %d\n", num1, num2);

    return 0;
}

