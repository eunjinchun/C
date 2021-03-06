// fibonachi.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void fibonaci(int n) {
	int fib[100];
	
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <=n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	printf("%d\n", fib[n]);
}

int main()
{
	int n = 0; //n번째 수

	printf("n번째 피보나치 수 구하기.\nn: ");
	scanf_s("%d", &n);
	fibonaci(n);

    return 0;
}

