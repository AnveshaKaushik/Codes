//Sorting an array containing 0s, 1s and 2s
//Without using sorting algorithm

#include<iostream>

using namespace std;

int main()
{
    int arr[] = {0,1,1,2,0,1,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count0 = 0, count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            count0++;
        }
        else if(arr[i] == 1)
        {
            count1++;
        }
        else
            count2++;
    }

    int j = 0;
    while (count0 > 0) {
        arr[j++] = 0;
        count0--;
    }
  
    // Then all the 1s
    while (count1 > 0) {
        arr[j++] = 1;
        count1--;
    }
  
    // Finally all the 2s
    while (count2 > 0) {
        arr[j++] = 2;
        count2--;
    }

    //Printing Sorted Array
    cout << "Sorted array:" <<endl;

    for(int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
    }

    return 0;
}