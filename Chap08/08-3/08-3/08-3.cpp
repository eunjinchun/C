// 08-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int kor, eng, math;
	double avg;
	printf("국어, 영어, 수학 점수 입력: ");
	scanf_s("%d, %d, %d", &kor, &eng, &math);
	avg = (kor + eng + math) / 3;
	if (avg >= 90)
		printf("A\n");
	else if (avg >= 80)
		printf("B\n");
	else if (avg >= 70)
		printf("C\n");
	else if (avg >= 50)
		printf("D\n");
	else
		printf("F\n");
    return 0;
}

