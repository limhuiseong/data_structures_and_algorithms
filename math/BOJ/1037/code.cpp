#include <stdio.h>

int main()
{
	int test_case;
	
	int maximum = 2 , minimum = 1000000;
	
	fflush(stdin);
	scanf("%d", &test_case);
	
	int input;
	
	for(int i =0; i < test_case; i++)
	{
		fflush(stdin);
		scanf("%d", &input);
		
		if(input < minimum)
		{
			minimum = input;
		}
		if(input > maximum)
		{
			maximum = input;
		}
		
	}
	
	printf("%d", maximum * minimum);
	
	return 0;
}
