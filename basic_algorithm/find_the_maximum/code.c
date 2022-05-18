//세 정수의 최댓값을 구하는 프로그램

#include <stdio.h>

int max3(int a, int b, int c)
{
	int max = a;
	
	if(b > max)
	max = b;
	
	if(c > max)
	max = c;
	
	return max;
}

int main()
{
	int a, b, c;
	
	printf("세 정수를 입력하시오:");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("최댓값은 %d", max3(a, b, c));
	
	return 0;
}
