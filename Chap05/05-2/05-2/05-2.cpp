// 05-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int x1, y1;
	int x2, y2;
	int area;
	printf("좌 상단의 x, y 좌표 입력: \n");
	scanf_s("%d, %d", &x1, &y1);
	printf("우 하단의 x, y 좌표 입력: \n");
	scanf_s("%d, %d", &x2, &y2);
	area = (x2 - x1)*(y1 - y2);
	printf("직사각형의 넓이: %d\n", area);
    return 0;
}

