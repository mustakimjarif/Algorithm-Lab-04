#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int A[], int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (x == A[mid])
    {
        return mid;
    }
    else if (x < A[mid])
    {
        return BinarySearch(A, low, mid - 1, x);
    }
    else
    {
        return BinarySearch(A, mid + 1, high, x);
    }
}
void printArray(int A[],int k)
{
    for(int i=0;i<k;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {1, 3, 4, 6, 8, 10, 12};
    int x = 6;
    //int x = 99;
    int index = BinarySearch(A, 0, (7 - 1), x);
    if (index != -1)
    {
        cout << "Element " << x << " found at index " << index << endl;
    }
    else
    {
        cout << "Element " << x << " not found in the array" << endl;
    }

    return 0;
}
