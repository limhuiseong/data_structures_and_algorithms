#include <iostream>

using namespace std;

int main()
{
    int test_case;

    int sum = 0;

    int N, M;

    cin >> test_case;

    for(int i = 0 ; i < test_case; i++)
    {
        cin >> N >> M;
        
        for(int j = 0 ; j < N; j++)
        {
            for(int k = j; k < M; k++)
            {
                sum++;
            }
        }

        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
