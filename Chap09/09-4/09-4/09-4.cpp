// 09-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int pibo(int num) {
	int f1 = 0, f2 = 1, f3, i;
	if (num == 1)
		printf("%d ", f1);
	else
		printf(" %d %d ", f1, f2);
	for (i = 0; i < num - 2; i++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
	return 0;
}

int main()
{
	int i;
	printf("피보나치 수열 출력\n");
	printf("몇 개 출력: ");
	scanf_s("%d", &i);
	pibo(i);
    return 0;
}

