// 07-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	int i=1;
	int a;
	double sum = 0;
	printf("몇 개의 숫자를 입력할 것인가? ");
	scanf_s("%d", &num);
	while (i < num+1) {
		printf("정수 입력: ");
		scanf_s("%d", &a);
		sum += a;
		i++;
	}
	printf("평균: %lf\n", sum / num);
    return 0;
}

