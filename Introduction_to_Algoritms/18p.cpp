#include <iostream>

using namespace std;

int main()
{
    int len;
    cin >> len;

    int arr[len+1];
    int key;

    for(int i = 1; i <= len; i++)
    {
        cin >> arr[i];
    }

    for(int j = 2; j <= len; j++)
    {
        key = arr[j];

        int i = j - 1;

        while(i > 0 && arr[i] > key)
        {
            arr[i+1] = arr[i];
            i = i - 1;
        }

        arr[i+1] = key;
    }

    for(int i = 1; i <= len; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}