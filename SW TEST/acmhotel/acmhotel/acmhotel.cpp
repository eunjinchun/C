// acmhotel.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int t = 0; //testcase 수
	int h, w, n; //호텔의 층수, 방수, 몇 번째 손님
	int room = 0; //손님이 묵을 방 번호
	
	printf("테스트케이스 수: ");
	scanf_s("%d", &t);

	for (int i = 1; i <= t; i++) {
		scanf_s("%d %d %d", &h, &w, &n);

	}

    return 0;
}

