// 07-6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num=0;
	int i = 0;
	int sum = 0;
	printf("1 이상 정수 5개의 합을 출력하는 프로그램 입니다.\n");

	
	while (i<5) {
		while (num <= 0) {
			printf("0보다 큰 수를 입력(%d번째): ", i + 1);
			scanf_s("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("총 합: %d\n", sum);
    return 0;
}

