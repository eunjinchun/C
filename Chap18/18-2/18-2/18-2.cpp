// 18-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p\n", arr1);
	printf("arr1+1: %p\n", arr1 + 1);
	printf("arr1+2: %p\n\n", arr1 + 2);

	printf("arr2: %p\n", arr2);
	printf("arr2+1: %p\n", arr2 + 1);
    return 0;
}

