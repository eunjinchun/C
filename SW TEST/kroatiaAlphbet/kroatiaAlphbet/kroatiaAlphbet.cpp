// kroatiaAlphbet.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "string.h"

int main()
{
	char strkro[100]; //문자열 저장
	int count = 0; //알파벳 갯수 측정
	int n = 0; //문장 크기

	printf("단어 입력: ");
	gets_s(strkro);
	n = strlen(strkro);

	for (int i = 0; i < n; i++) {
		if (strkro[i] == 'c') {
			if (strkro[i + 1] == '=' or '-') {
				count++;
			}
		}
		else if (strkro[i] == 'd') {
			if (strkro[i + 1] == 'z' or '-') {
				count++;
			}
		}
		else if (strkro[i] == 'l') {
			if (strkro[i + 1] == 'j') {
				count++;
			}
		}
		else if (strkro[i] == 'n') {
			if (strkro[i] == 'j') {
				count++;
			}
		}
		else if (strkro[i] == 's') {
			if (strkro[i] == '=') {
				count++;
			}
		}
		else if (strkro[i] == 'z') {
			if (strkro[i] == '=') {
				count++;
			}
		}
		else
			count++;
	}
	printf("%d\n\n", count);
    return 0;
}

