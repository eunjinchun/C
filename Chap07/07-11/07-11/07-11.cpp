// 07-11.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int n;
	int mul=1;
	printf("n!을 구하는 코드\n");
	printf("n을 입력: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		mul *= i;
	}
	printf("%d! = %d\n", n, mul);
    return 0;
}

