/* N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다. 
이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
*/

#include <iostream>

using namespace std;

int sorted[1000000];

void merge(int list[], int left, int mid, int right);
void merge_sort(int list[], int left, int right);

int main()
{
    int n;


    cin >> n;

    int list[n];

    for(int i = 0; i < n; i++)
        cin >> list[i];

    merge_sort(list, 0 , n - 1);

    for(int i = 0; i < n; i++)
        cout << list[i] << "\n";

    return 0;
}

void merge_sort(list[], left, right)
{
    int mid;

    if(left < right)
    {
        mid = (left + right) / 2;
        merge_sort(list, left, mid);
        merge_sort(list, mid + 1, right);
        merge(list, left, mid, right);
    }
}

void merge(int list[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    int l;

    while(i <= mid && j <= right)
    {
        if(list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = ldsist[j++];
    }

    if(i > mid)
    {
        for(l = j; l <= right; l++)
            sorted[k++] = list[l];
    }
    else
    {
        for(l = i)
    }
}