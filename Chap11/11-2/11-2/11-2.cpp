// 11-2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char arr[] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };
	int len = sizeof(arr) / sizeof(char);
	
	for (int i = 0; i < len; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
    return 0;
}

