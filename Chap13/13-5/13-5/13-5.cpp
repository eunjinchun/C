// 13-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int * arr[3] = { &num1, &num2, &num3 };

	printf("%d \n", *arr[0]);
	printf("%d \n", *arr[1]);
	printf("%d \n", *arr[2]);

    return 0;
}

