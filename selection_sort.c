#include<stdio.h>


void selection_sort(int A[], int n)
{
    int index_min;

    for(int i = 0; i < n-1; i++)
    {
        index_min = i;
        for(int j = i; j < n; j++) 
        {
            if(A[j] < A[index_min])
            {
                index_min = j;
            }
        }
    
        if (index_min != i) {
            int temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;

        }
    }
}

int main ()
{
    int arr[5] = {5,6, 3 ,1,2};
    int n = 5;
    selection_sort(arr, n);
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}