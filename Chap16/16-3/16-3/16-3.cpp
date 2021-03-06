// 16-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int arr[5][5];

void WriteRecord(void) {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		printf("학생 성적 입력: ");
		for (int j = 0; j < 4; j++) {
			printf("과목 %d: ", j + 1);
			scanf_s("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		arr[i][4] = sum;
	}
}

void WriteSumRecord(void) {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			sum += arr[j][i];
		arr[4][i] = sum;
		arr[4][4] += sum;
	}
}

void ShowAllRecord(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
}
int main()
{
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();
    return 0;
}

