#include "stdafx.h"

int main()
{
	int t = 0; //testcase 수
	int h, w, n; //호텔의 층수, 방수, 몇 번째 손님
	int roomy = 0, roomx = 0; //손님이 묵을 방 층수, 호수
	
	printf("테스트케이스 수: ");
	scanf_s("%d", &t);

	for (int i = 1; i <= t; i++) {
		h = 0; w = 0; n = 0; 
		scanf_s("%d %d %d", &h, &w, &n);
		if (h < n) {
			roomy = n % h;
			roomx = (n / h) + 1;
		}
		else {
			roomy = n;
			roomx = 1;
		}

		if (roomx < 10) {
			printf("%d0%d\n", roomy, roomx);
		}
		else
			printf("%d%d\n", roomy, roomx);
	}

	
    return 0;
}

