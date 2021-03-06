// 09-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

double CelToFah(double tem) {
	return 1.8*tem + 32;

}

double FahToCel(double tem) {
	return (tem - 32) / 1.8;
}

int main()
{
	int i;
	double tem;
	printf("섭씨->화씨 / 화씨->섭씨 반환 함수\n");
	printf("1.섭씨->화씨\n 2.화씨->섭씨\n 선택: ");
	scanf_s("%d", &i);
	printf("온도 입력: ");
	scanf_s("%lf", &tem);
	if (i == 1)
		printf("섭씨온도: %lf, 화씨온도: %lf\n", tem, CelToFah(tem));
	else
		printf("화씨온도: %lf, 섭씨온도: %lf\n", tem, FahToCel(tem));
    return 0;
}

