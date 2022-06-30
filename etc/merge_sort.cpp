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
}