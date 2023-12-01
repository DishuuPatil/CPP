#include<iostream>
using namespace std;

void rotateToLeft(int arr[],int n)
    {
        int temp = arr[0];
        for(int i=0; i<n; i++)
        {
            arr[i] = arr[i+1];
            
        }
        arr[n-1] = temp;
       
    }
    void printArray(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<< " ";
        }
    }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[n];
    rotateToLeft(arr,n);
    printArray(arr,n);
    return 0;
}

