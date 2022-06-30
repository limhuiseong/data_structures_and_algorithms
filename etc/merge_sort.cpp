#include <iostream>
#include <stdio.h>

#define MAX_SIZE 8

int sorted[MAX_SIZE];


void merge(int list[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    int l;

    while(i <= mid && j <=right)
    {
        if(list[i] <= list[j])
            sorted[k++]= list[i++];
        else
            sorted[k++] = list[j++];
    }

    if(i > mid)
    {
        for(l = j; l <= right; l++)
            sorted[k++] = list[l];
    }

    else
    {
        for(l = i; l <= mid; l++)
            sorted[k++] = list[l];
    }

    for(l = left; l <=right; l++)
    {
        list[l] = sorted[l];
    }
}

void merge_sort(int list[], int left, int right)
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

int main()
{
    int i;
    int n = MAX_SIZE;   // array의 크기
    int list[n] = {7, 6, 5, 4, 3, 2, 1, 0};

    merge_sort(list, 0, n - 1); // 함수에 정렬할 array와 처음, 끝, index 입력

    for(i = 0; i < n; i++)
    {
        printf("%d\n", list[i]);
    }

    return 0;
}