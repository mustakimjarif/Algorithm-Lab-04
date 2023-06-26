#include <bits/stdc++.h>
using namespace std;

void Merge(int A[], int B[], int C[], int n, int m)
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (A[i] <= B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    while (i < n)
    {
        C[k++] = A[i++];
    }

    while (j < m)
    {
        C[k++] = B[j++];
    }
}

void printArray(int arr[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {1,2,3,4,5};
    printArray(A,5);

    int B[] = {6,7,8,9,10};
    printArray(B,5);

    int C[10];

    Merge(A, B, C, 5, 5);

    cout << "Merged array: ";
    printArray(C, 10);

    return 0;
}
