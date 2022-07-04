#include <iostream>

using namespace std;


int main()
{
    int test_case;

    cin  >> test_case;

    long long int arr[test_case];

    long long int max = 0;

    for(int i = 0; i < test_case; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < test_case; i++)
    {
        for(int j = i; j < test_case; j++)
        {
            if(arr[i] > arr[j])
            {
                if(max < arr[i] - arr[j])
                    max = arr[i] - arr[j];
            }
            else
            {
                if(max < arr[j] - arr[i])
                    max = arr[j] - arr[i];
            }
        }
    }

    cout << max;

    return 0;
}