#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int n;
	int count=0;
	char *ptr=(char *)malloc(sizeof(char));
	char arr[10];

	printf("입력받고자 하는 단어 개수 입력: ");
	scanf_s("%d", &n);
	
	for (int i = 0; i < n; i++) {
		fflush(stdin);
		gets_s(arr);
		int strSize = strlen(arr);
		for (int j =0;j<strSize;j++) {
			int k = j + 2;
		
			for (k; k < strSize; k++) {
				if (arr[j] == arr[k]) {
					break;
				}
				else {
					count++;
				}
			}
		}
	}
	printf("count: %d\n", count);
    return 0;
}

