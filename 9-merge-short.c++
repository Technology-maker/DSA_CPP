#include <bits/stdc++.h>
using namespace std;

int merge(int *arr, int start, int end);
int mergeshort(int *arr, int start, int end);

int main()
{

    int arr[10] = {24, 5, 3, 7, 8, 6, 2, 54, 9, 2};
    int n = 10;

    mergeshort(arr, 0, n - 1);

    for (int i = 0; i < 10; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}

int mergeshort(int *arr, int start, int end)
{
    // base condation.
    if (start >= end)
    {
        return 0;
    }
    int mid = (start + end) / 2;

    // left part sort.

    mergeshort(arr, start, mid);

    // right part sort.

    mergeshort(arr, mid + 1, end);

    // merge

    merge(arr, start, end);
}

int merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;

    int length1 = mid - start + 1;
    int length2 = end - mid;

    int *first = new int[length1];
    int *second = new int[length2];

    // copy array value start to mid of arra.

    int mainindex = start;

    for (int i = 0; i < length1; i++)
    {
        first[i] = arr[mainindex++];
    }

    // copy mid to end

    mainindex = mid + 1;

    for (int i = 0; i < length2; i++)
    {
        first[i] = arr[mainindex++];
    }
    // merge two shorted array

    int index1 = 0;
    int index2 = 0;
    mainindex = start;
    while (index1 < length1 && index2 < length2)
    {
        if (arr[index1] < arr[index2])
        {
            arr[mainindex++] = first[index1];
        }
        else
        {
            arr[mainindex++] = first[index2++];
        }
    }

    while (index1 < length1)
    {
        arr[mainindex++] = first[index1++];
    }

    while (index2 < length2)
    {
        arr[mainindex++] = second[index2++];
    }
}
