// findfraction.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int n; //입력받을 수
	int a=0; //임시저장숫자
	int mo=0, ja=0; //분모, 분자
	printf("숫자 입력: ");
	scanf_s("%d", &n);

	for (int i = 1; i < n; i++) {
		a = a + i;
		if (n < a) {
			ja = n - (a - i);
			mo = i - (ja - 1);
		}
	}
	printf("%d/%d\n", ja, mo);
    return 0;
}

