// 10-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int main()
{
	int cnt=0;
	int c;
	int n = 2;
	printf("10개의 소수 출력 프로그램\n");
	while (cnt < 10) {
		int i = 2;
		c = n % i;
		while (c != 0) {
			i++;
			c = n % i;
		}
		if (i == n) {
			printf("%d ", n);
			cnt++;
		}
		n++;
	}
	
	return 0;
}

