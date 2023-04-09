#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<< "Enter no. of elements"<< endl;
    cin>> n;
    int arr[n];

    //Taking input in array
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];
    for(int j = 1; j < n; j++)
    {
        if(min < arr[j])
            min = arr[j];

        if(max > arr[j])
            max = arr[j];
    }

    cout << "Minimum Element is:" << min <<endl;
    cout << "Maximum Element is:" << max <<endl;

    return 0;
}