// 12-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num1 = 10, num2 = 20;
	int * prt1 = &num1;
	int * prt2 = &num2;
	int * temp;

	(*prt1) += 10;
	(*prt2) -= 10;

	temp = prt1;
	prt1 = prt2;
	prt2 = temp;

	printf("%d %d\n", *prt1, *prt2);

    return 0;
}

