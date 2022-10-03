#include <iostream>
using namespace std;

void mergeArr(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int size1 = mid - start + 1;
    int size2 = end - mid;

    int *arr1 = new int[size1];
    int *arr2 = new int[size2];

    int k = start;

    for (int i = 0; i < size1; i++)
    {
        arr1[i] = arr[k++];
    }

    k = mid + 1;

    for (int i = 0; i < size2; i++)
    {
        arr2[i] = arr[k++];
    }

    int ptr1 = 0;
    int ptr2 = 0;

    k = start;

    while (ptr1 < size1 && ptr2 < size2)
    {
        if (arr1[ptr1] < arr2[ptr2])
        {
            arr[k++] = arr1[ptr1++];
        }
        else
        {
            arr[k++] = arr2[ptr2++];
        }
    }

    while (ptr1 < size1)
    {
        arr[k++] = arr1[ptr1++];
    }

    while (ptr2 < size2)
    {
        arr[k++] = arr2[ptr2++];
    }

    delete [] arr1;
    delete [] arr2;
}

void mergeSort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);

    mergeSort(arr, mid + 1, end);

    mergeArr(arr, start, end);
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete [] arr;

    return 0;
}
