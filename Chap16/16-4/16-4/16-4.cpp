// 16-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int mean = 0, i, j;
	int record[3][3][2] = {
		{
			{ 70, 80 },	{ 94,90 },{ 70, 85 }
		}, 
		{
			{83, 90}, {95, 60}, {90, 82}
		}, 
		{
			{98, 89}, {99, 94}, {91, 87}
		}
	};

	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[0][i][j];
	printf("A학급 전체 평균: %g\n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j=0; j < 2; j++)
			mean += record[1][i][j];
	printf("B학급 전체 평균: %g\n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[2][1][j];
	printf("C학급 전체 평균: %g\n", (double)mean / 6);
    return 0;
}

