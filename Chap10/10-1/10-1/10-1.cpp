// 10-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int gugudan(int num1, int num2) {
	int i, j;
	for (i = num1; i <= num2; i++) {
		for (j = 1; j < 10; j++)
			printf("%d x %d = %d\n", i, j, i*j);
		printf("\n");
	}
	return 0;
}

int main()
{
	int num1, num2;
	printf("구구단 출력 프로그램\n두 수사이의 구구단 출력\n");
	printf("두 수 입력: ");
	scanf_s("%d, %d", &num1, &num2);
	if (num1 < num2)
		gugudan(num1, num2);
	else
		gugudan(num2, num1);
    return 0;
}

