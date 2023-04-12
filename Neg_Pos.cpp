//Move all negative numbers to beginning and positive to end

#include<iostream>

using namespace std;

int main()
{
    int arr[] = {-12,11,13,15,-5,-7,6,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr2[n];

    int countN = 0;
    int countP = n-1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            arr2[countN] = arr[i];
            countN++;
        }
        else
        {
            arr2[countP] = arr[i];
            countP--;
        }
    }

    for(int j = 0; j < n; j++)
    {
        arr[j] = arr2[j];
    }

    for(int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}