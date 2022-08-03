#include<bits/stdc++.h>
using namespace std;

int print_array(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<< arr[i]<<' ';
    }
    cout<<endl;
}


int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    //Before sort
    cout<< "Before Sort: ";
    print_array(arr, n);

    //Step 1: Finding Max
    int max = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    //Step 2: Initialization of 'count' Array
    int count[max+1] = {0};

    //Alternative Initialization
    //for(int i = 0; i<=max; i++)
    //{
    //    count[i] = 0;
    //}


    //Step 3: Frequency Calculation
    for(int i = 0; i<n; i++)
    {
        count[arr[i]]++;
    }

    // Step 4 // Cumulitive Sum Calculation
    for(int i = 1; i<=max; i++)
    {
        count[i] += count[i-1];
    }

    //Step 5 // Final Array --> Backward Traversal of Basic array
    int final[n];
    for(int i = n-1; i>=0; i--)
    {
        count[arr[i]]--;
        int k = count[arr[i]];
        final[k] = arr[i];

    }

    //After sort
    cout<<"After Sort: ";
    print_array(final, n);

    return 0;
}