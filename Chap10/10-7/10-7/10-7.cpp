// 10-7.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
int mul = 1;
void recursive(int n) {
	
	if (n == 0) {
		printf("결과값: %d\n", mul);
		return;
	}
	mul = mul * 2;
	recursive(n - 1);
}

int main()
{
	int n;
	printf("2의 n승을 구하는 프로그램\n");
	printf("n입력: ");
	scanf_s("%d", &n);
	recursive(n);
    return 0;
}

