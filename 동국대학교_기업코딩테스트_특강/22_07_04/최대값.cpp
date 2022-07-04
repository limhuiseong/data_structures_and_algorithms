#include <iostream>
#define size 9

using namespace std;

int main()
{
    int arr[size] = {80 ,90 ,70 ,30 ,40 ,20 ,60 ,10 ,50};
    int max = 0;

    for(int i = 0; i < size; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    cout << max;

    return 0;
}