// 07-7.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int i = 0, j=0;
	while (i < 5) {
		while (j<i) {
			printf("o ");
			j++;
		}
		j = 0;
		printf("*\n");
		i++;
	}
    return 0;
}

