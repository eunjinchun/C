// 09-6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void Recursive(int num) {
	if (num <= 0)
		return;
	printf("Recursive call! %d\n", num);
	Recursive(num - 1);
}

int main()
{
	Recursive(3);
    return 0;
}

