// 10-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int input;
	int cream = 500;
	int shrimp = 700;
	int coke = 400;
	int a, b, c;
	printf("슈퍼에서 물건을 구매하려고 함\n");
	printf("크림빵 500원, 새우깡 700원, 콜라 400원\n");
	printf("현재 소유한 금액: ");
	scanf_s("%d", &input);
	
	for (a = 1; input - (cream*a) > 0; a++) {
		for (b = 1; input - (shrimp*b) > 0; b++) {
			for (c = 1; input - (coke*c) > 0; c++) {
				if ((cream*a) + (shrimp*b) + (coke*c) == input)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", a, b, c);				
			}
		}
	}
	printf("어떻게 구입하시겠습니까?");
    return 0;
}

