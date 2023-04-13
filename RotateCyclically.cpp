//Program to rotate an array cyclically by one

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of elements in the array:" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements:" <<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //To rotate the array
    int temp = arr[n-1];
    for(int j = 1; j <= n; j++)
    {
        arr[n-j] = arr[n- j - 1];
    }
    arr[0] = temp;

    //Printing the array
    for(int k = 0; k < n; k++)
    {
        cout<< arr[k] << " ";
    }
    return 0;
}