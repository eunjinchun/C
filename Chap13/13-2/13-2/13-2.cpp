// 13-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int * ptr = arr;

	for (int i = 0; i < 5; i++) {
		*(ptr + i) += 2;
	}
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
    return 0;
}

