// 13-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int arr[6] = { 1, 2, 3, 4, 5,6 };
	int * front = &arr[0];
	int * back = &arr[5];
	int temp;

	for (int i = 0; i < 3; i++) {
		temp = *front;
		*front = *back;
		*back = temp;
		front += 1;
		back -= 1;
	}
	for (int i = 0; i < 6; i++)
		printf("%d ", arr[i]);

    return 0;
}

