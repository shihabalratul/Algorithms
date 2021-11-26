#include<stdio.h>

int linear_search(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);
    
    
    printf("%d\n",linear_search(arr, 5, x) + 1);

    return 0;
}