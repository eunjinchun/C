// 10-6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int n;
	int k=0;

	printf("n을 입력 받아, 2^k <= n이 되는 k의 최댓값 출력 프로그램\n");
	printf("n 입력: ");
	scanf_s("%d", &n);
	
	for (int i = 1; i < n; i *= 2) {
		if (2 * i <= n)
			k++;
	}
	printf("%d\n", k);

    return 0;
}

