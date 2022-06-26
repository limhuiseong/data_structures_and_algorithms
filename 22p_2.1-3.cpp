#include <iostream>

using namespace std;

int main()
{
    int key;
    int len;

    cin >> len;

    int arr[len+1];

    for(int i = 1; i <= len; i++)
    {
        cin >> arr[i];
    }

    cout << "search number?" << endl;

    int searchNumber;

    cin >> searchNumber;

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
        if(searchNumber == arr[i])
        {
            cout << "YES" << endl;
            break;
        }
        if(searchNumber > arr[i])
        {
            cout << "NO" << endl;
            break;
        }
        if(i == len)
        cout << "NIL" << endl;
    }
    

    return 0;
}