// minimummove.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int t = 0; //테스트 케이스 수
	int x, y; //현재 위치, 목표 위치
	int min=0; //최소 거리

	printf("테스트 케이스 수 입력: ");
	scanf_s("%d", &t);

	for (int i = 1; i <= t; i++) {
		scanf_s("%d %d", &x, &y);
		min = y - x - 1;
		printf("%d\n", min);
	}

    return 0;
}

