// 09-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int Add(int n1, int n2) { //인자전달o 반환값o
	return n1 + n2;
}

void ShowAddResult(int num) { //인자전달o 반환값x
	printf("덧셈 결과 출력: %d\n", num);
}

int ReadNum(void) { //인자전달x 반환값o
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void) { //인자전달x 반환값x
	printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다.\n");
	printf("두 개의 정수를 입력하세요: ");
}

int main()
{
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	   return 0;
}

