#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int size)
{
	for(int i = 0; i<size; i++)
	{
		cout<<arr[i]<<' ';
	}

	cout<<endl;
}

int main()
{
 	int size;
 	cin>>size;

 	int arr[size];

 	for(int i = 0; i<size; i++)
 	{
 		cin>>arr[i];
 	}

 	cout<<"Before Sort: ";
 	printArray(arr, size);

 	//Bubble Sort Implementation
	for(int i=1; i<size; i++)
	{
		int flag = 0;
		cout<<"Iteration No: "<< i<< endl;
		for(int j=0; j<size-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j], arr[j+1]);
				flag = 1;
			}
			printArray(arr, size);
		}
		cout<< endl;

		if(flag == 0) break; 
	}

 	
 	cout<<"After Sort: ";
 	printArray(arr, size);


	return 0;   
}