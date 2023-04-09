//Finding Kth Smallest and Kth Largest element in an array
//Using Sorting approach

#include<iostream>

using namespace std;

int main()
{
    int n, k;
    int count = 0;
    cout << "Enter the no. of elements:" << endl;
    cin >> n;

    cout << "Enter the value of K" << endl;
    cin >> k;

    int arr[n];

    //Taking input
    cout << "Enter the elements: "<< endl; 
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //Finding Kth smallest element
    for(int j = 0; j < n; j++)
    {
        for(int k = 0; k < (n-j); k++)
        {
            if(arr[k] > arr[k+1])
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;  
            }
        }
    }

    cout << "Kth smallest element:" << arr[k-1] << endl;
    cout << "Kth largest element:" << arr[n-k] <<endl;


    return 0;
}