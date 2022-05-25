#include<stdio.h>

int main()
{
	int test_case;
	int arr[1000] = {0, };
	int temp;
	
	scanf("%d", &test_case);
	
	for (int i = 0; i < test_case; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < test_case; i++)
	{
		for (int j = 0; j < test_case-1; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < test_case; i++)
	{
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
