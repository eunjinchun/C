// 08-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, z;
	int result;
	for (a = 0; a < 10; a++) {
		for (z = 0; z < 10; z++) {
			if (a == z)
				continue;
			result = a * 10 + z + z * 10 + a;
			if (result == 99)
				printf("%d%d + %d%d = %d\n", a, z, z, a, result);
		}
	}
    return 0;
}

