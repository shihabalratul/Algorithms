#include<stdio.h>


void bubble_sort(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (A[j] < A[j+1])
            {
                int temp = A[j+1];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[5] = {5,6, 3 ,1,2};
    int n = 5;

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}