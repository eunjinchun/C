// 09-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int maxPrint(int num1, int num2, int num3) {
	int max;
	if (num1 < num2) {
		if (num2 < num3)
			max = num3;
		else
			max = num2;
	}
	else {
		if (num1 < num3)
			max = num3;
		else
			max = num1;
	}
	return max;
}

int minPrint(int num1, int num2, int num3) {
	int min;
	if (num1 < num2) {
		if (num1 < num3)
			min = num1;
		else
			min = num3;
	}
	else {
		if (num2 < num3)
			min = num2;
		else
			min = num3;
	}
	return min;
}


int main()
{
	int num1, num2, num3;
	printf("세 정수 중 가장 큰 수/작은 수 출력\n");
	printf("세 정수 입력: ");
	scanf_s("%d, %d, %d", &num1, &num2, &num3);
	printf("가장 큰 수: %d\n", maxPrint(num1, num2, num3));
	printf("가장 작은 수: %d\n", minPrint(num1, num2, num3));
    return 0;
}

