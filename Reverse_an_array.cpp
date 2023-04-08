//Program for reversal of array

#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<< "Enter the number of elements in the array:" << endl;
    cin >> n;
    int arr[n];

    //Taking input

    cout << "Enter the elements" <<endl;

    for(int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    int start = 0, end = n-1;

    //Reversing the string
    while(start < end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp; 
        start++;
        end--;
    }

    //Printing the Reversed array
    cout<< "Output is:" <<endl;
    for(int k = 0; k < n; k++)
    {
        cout << arr[k] <<endl;
    }

    return 0;
}