//세 정수의 중앙값을 구한다. 

#include <stdio.h>

int med3(int a, int b, int c)
{
	if(a >= b)
	{
		if(b >= c)
		return b;
		
		else if(a <= c)
		return a;
		
		else
		return c;
	}
	
	else if(a > c)
	return a;
	
	else if(b >c)
	return c;
	
	else
	return b;
}

int main()
{
	int a, b, c;
	
	printf("세 정수의 중앙값을 구합니다.:");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("중앙값은 %d입니다.", med3(a, b, c));
	
	return 0;
}
