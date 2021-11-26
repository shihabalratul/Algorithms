#include<stdio.h>

// iterative binary search
int binary_search(int *arr, int len, int element) // ** Better
{
    int start = 0;
    int end = len - 1;
    while(start <= end) //used "=" because last one might be desired element
    {
        int mid = (start/2) + (end/2); // divided both by 2 to prevent integer overflow
        
        if(arr[mid] == element)
        {
            return mid;
        } else if(arr[mid] <= element){
            start = mid;
        } else {
            end = mid;
        }
    }
}

//recursive version
int binary_search_rec(int *arr, int start, int end, int element)
{
    int mid = (start/2) + (end/2); // divided both by 2 to prevent integer overflow

    if(arr[mid] == element)
    {
        return mid;
    } else if(arr[mid] <= element) {
        return binary_search_rec(arr, mid, end, element);
    } else if(arr[mid] >= element){
        return binary_search_rec(arr, start, mid, element);
    } 
    

}

int main()
{
    int arr[10] = {1 , 3 ,9, 10, 13, 14,15, 18, 20, 24};
    
    printf("Iterative:%d\n",binary_search(arr,10, 13));
    printf("Recursive:%d\n",binary_search_rec(arr,0,9, 15));
    return 0;
}