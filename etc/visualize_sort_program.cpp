#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void visualize(int arr[])
{
    int i = 0;
    int j = 0;
    int height = 19;

    for(; i < 20; i++)
    {
        for(; j < 20; j++)
        {
            if(arr[j] >= height)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        height --;
        cout << "\n";
    }
}

int main()
{
    int arr[20] = {0, };
    int check[20] = {0, };
    int temp;
    int i = 0;

    srand(time(NULL));

    //무작위 값 (0 ~ 19) 겹치지 않는 array 생성
    for(; i < 20; i++)
    {
        temp = rand() % 20;
        
        while(1)
        {
            if(check[temp] == 0)
            {
                arr[i] = temp;
                check[temp] ++;
                break;
            }
            else
            {
                temp = rand() % 20;
            }
        }
    }

    visualize(arr);
    
    return 0;


}

