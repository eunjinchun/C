// 07-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num=1;
	int sum = 0;

	while (num != 0) {
		printf("0이 아닌 정수 입력(0일 경우 종료): ");
		scanf_s("%d", &num);
		sum += num;
	}
	printf("입력한 정수들의 합: %d\n", sum);

    return 0;
}

