// 14-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void Swap3(int *ptr1, int *ptr2, int *ptr3) {
	int temp1 = *ptr2;
	int temp2 = *ptr3;
	*ptr2 = *ptr1;
	*ptr3 = temp1;
	*ptr1 = temp2;
}

int main()
{
	int num1, num2, num3;
	printf("세 변수를 서로 바꾸는 함수. 세 변수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("변환 전 - num1, num2, num3: %d, %d, %d\n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);
	printf("변환 후 - num1, num2, num3: %d, %d, %d\n", num1, num2, num3);
    return 0;
}

