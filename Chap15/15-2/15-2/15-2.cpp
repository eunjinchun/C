// 15-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	int i=0, size=0;
	int arr[100];
	printf("10진수 정수를 2진수로 변환. 10진수 정수 입력: ");
	scanf_s("%d", &num);

	while (num >= 1) {
		arr[i++] = num % 2;
		num /= 2;
		size++;
	}
	arr[i] = num / 2;
	for (i = size - 1; i >= 0; i--)
		printf("%d", arr[i]);
	printf("\n");
    return 0;
}

