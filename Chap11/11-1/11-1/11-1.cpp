// 11-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int main()
{
	int arr[5];
	int max, min, sum=0;
	printf("5개 정수 입력: ");
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	max = min = arr[0];
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
	printf("합: %d\n", sum);

    return 0;
}

