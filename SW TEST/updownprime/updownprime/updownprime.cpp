// updownprime.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int n = 0, m = 0;
	int j;

	printf("n이상, m이하 소수 출력");
	printf("n, m 입력: ");
	scanf_s("%d %d", &n, &m);

	for (int i = n; i <= m; i++) {
		for (j = 2; j <= i; j++) {
			if (i%j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d\n", i);
		}
	}
	printf("\n");
    return 0;
}

