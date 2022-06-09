#include <stdio.h>

int main()
{
	int arr[100][100];
	int first, second;
	
	
	for(int i = 0 ; i < 100; i++)
	{
		for(int j = 0; j < 100; j++)
		{
			arr[i][j] = 0;
		}
	}
	 
	
	printf("세로 가로:");
	scanf("%d %d", &first, &second);
	
	int i = 0;
	int j = 0;
	int count = 2;
	arr[i][j] = 1;
	
	while( count <= first * second )
	{
		while(arr[i][j +1] == 0 && j +1 < second)
		{
			j++;
			arr[i][j] = count;
			count++;
		}
		
		while(arr[i +1][j] == 0 && i +1 < first)
		{
			i++;
			arr[i][j] = count;
			count++;
		}
		
		while(arr[i][j - 1] == 0 && j - 1 >= 0)
		{
			j--;
			arr[i][j] = count;
			count++;
		}
		
		while(arr[i - 1][j] == 0 && i - 1 >= 0)
		{
			i--;
			arr[i][j] = count;
			count++;
		}
	}
	
	for(int i = 0 ; i <first; i++)
	{
		for(int j = 0 ; j <second; j++)
		{
			printf("%4d " , arr[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
