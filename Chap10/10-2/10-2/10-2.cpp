// 10-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int main()
{
	int num1, num2;
	int n;
	int gcm;
	printf("두 수의 최대 공약수를 구하는 프로그램\n");
	printf("두 정수 입력: ");
	scanf_s("%d, %d", &num1, &num2);
	if (num1 < num2)
		n = num2;
	else
		n = num1;
	for (int i = 1; i < n; i++) {
		if (num1%i == 0 && num2%i == 0 && i != 1)
			gcm = i;
	}
	printf("최대 공약수: %d\n", gcm);
    return 0;
}

