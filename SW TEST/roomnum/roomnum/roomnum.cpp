#include "stdafx.h"

int main()
{
	int roomnum[7]; //방 번호
	int n = 0; //방 번호 입력
	int len = 0; //길이
	int i = 1;
	int max = 0; // set 갯수
	int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	printf("방 번호: ");
	scanf_s("%d", &n);

	while (n > i) {
		i *= 10;
		len++;
	}
	for (int i = len - 1; i >= 0; i--) {
		roomnum[i] = n % 10;
		n /= 10;
	}

	for (int i = 0; i < len; i++) {
		if (roomnum[i] == 0) {
			arr[0] += 1;
		}
		else if (roomnum[i] == 1) {
			arr[1] += 1;
		}
		else if (roomnum[i] == 2) {
			arr[2] += 1;
		}
		else if (roomnum[i] == 3) {
			arr[3] += 1;
		}
		else if (roomnum[i] == 4) {
			arr[4] += 1;
		}
		else if (roomnum[i] == 5) {
			arr[5] += 1;
		}
		else if (roomnum[i] == 6) {
			arr[6] += 1;
		}
		else if (roomnum[i] == 7) {
			arr[7] += 1;
		}
		else if (roomnum[i] == 8) {
			arr[8] += 1;
		}
		else if (roomnum[i] == 9) {
			arr[9] += 1;
		}
	}
	if ((arr[6]+arr[9]) % 2 == 0) {
		arr[6] = (arr[6]+arr[9]) / 2;
	}
	else {
		arr[6] = (arr[6]+arr[9]) / 2 + 1;
	}
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("%d\n", max);
    return 0;
}