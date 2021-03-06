// 14-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void ShowArayElem(int * parm, int len) {
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", parm[i]);
	printf("\n");
}

void AddArayElem(int * parm, int len, int add) {
	int i;
	for (i = 0; i < len; i++)
		parm[i] += add;
}

int main()
{
	int arr[3] = { 1, 2, 3 };
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));


	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

    return 0;
}

