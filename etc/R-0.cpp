#include <iostream>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    int arr[N][M];
    int small = 10000;
    int result = 0;

    for(int i = 0; i <N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < N; i++)
    {
        small = 10000;
        for(int j = 0; j < M; j++)
        {
            if(arr[i][j] < small)
                small = arr[i][j];
        }
        if(result < small)
            result = small;
    }

    cout << result;
    
}