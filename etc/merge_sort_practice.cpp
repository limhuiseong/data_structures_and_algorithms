#include <iostream>

using namespace std;

int result[10000000];

void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    int l;

    while(i <= mid && j <= right)
    {
        if(arr[i] < arr[j])
        {
            result[k++] = arr[i++];
        }
        else
        {
            result[k++] = arr[j++];
        }
    }

    if(i > mid)
    {
        for(l = j; l <= right; l++)
        {
            result[k++] = arr[l];
        }
    }
    else
    {
        for(l = i; l <= mid; l++)
        {
            result[k++] = arr[l];
        }
    }

    for(l = left; l <= right; l++)
    {
        arr[l] = result[l];
    }
}

void mergeSort(int arr[], int left, int right)
{
    int mid;

    if(left < right)
    {
        mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    int testCase;

    cin >> testCase;

    int arr[testCase];

    for(int i = 0; i < testCase; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, testCase - 1);

    for(int i = 0; i < testCase; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}