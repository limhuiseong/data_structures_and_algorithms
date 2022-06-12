//세 정수의 최솟값을 구하는 프로그램

#include <stdio.h>

int min3(int a, int b, int c)
{
	int min = a;
	
	if(b<min)
	min = b;
	
	if(c<min)
	min = c;
	
	return min;
}

int main()
{
	int a, b, c;
	printf("세 정수를 입력하시오:");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("최솟값은 %d", min3(a, b, c));
	
	return 0;
}
