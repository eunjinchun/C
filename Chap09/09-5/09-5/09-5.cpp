// 09-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void Add(int val);
int num;

int main(void)
{
	printf("num: %d\n", num);
	Add(3);
	printf("num: %d\n", num);
	num++;
	printf("num: %d\n", num);
	return 0;
}

void Add(int val) {
	num += val;
}
