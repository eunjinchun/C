// 10-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int sec=0;
	int h, m, s;
	printf("초를 입력받아, [시, 분, 초]형태로 출력\n");
	printf("초 입력: ");
	scanf_s("%d", &sec);

	h = sec / 3600;
	m = (sec % 3600) / 60;
	s = (sec % 60) % 60;

	printf("[h: %d, m: %d, s: %d]\n", h, m, s);
    return 0;
}

