#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int n, i;
	int arr[1000];
	char *p;
	char pt[30];
	FILE * fp;

	fopen_s(&fp, "input.txt", "r");
	if (fp == NULL) {
		puts("fail");
		return -1;
	}
	
	
	/*for (int i = 0; i < 1000; i++) {
		printf("%d ", arr[i]);
	}*/

		//fclose(fp);
	fscanf_s(fp, "%s", *pt);
	n=atoi(pt);

	for (int j = 0; j < n; j++) {
		fscanf_s(fp, "%s", *pt);
		arr[j] = atoi(pt);
		printf("%d", arr[j]);
	}

	printf("성공");

    return 0;
}

