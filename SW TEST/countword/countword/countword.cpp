// countword.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "string.h"

int main()
{
	char str[50]; //문자열 저장
	int count=1; //단어 몇 개인지 세는 변수
	int n; //문장 길이
	printf("문자열 입력: ");
	gets_s(str);
	n = strlen(str);
	//printf("%s\n", str);
	for (int i = 0; i < n; i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	printf("%d\n\n", count);
    return 0;
}

