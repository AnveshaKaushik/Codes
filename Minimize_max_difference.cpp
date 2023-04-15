//To minimize the maximum difference between the heights
#include<iostream>

using namespace std;

int main()
{
    int n,k;
    cout << "Enter n:" <<endl;
    cin >> n;
    cout << "Enter k:"<<endl;
    cin >> k;
    
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
    }

    for( int j = 0; j < n; j++)
    {
        if(a[j] < k)
            a[j] = a[j] + k;
        else
            a[j] = a[j] - k;
    }

    int min = a[0];
    int max = a[0];
    for(int k = 0; k < n; k++)
    {
        if(a[k] < min)
            min = a[k];
        if(a[k] > max)
            max = a[k];
    }

    cout << "Maximum Difference: " <<endl;
    int diff = max - min;
    cout << diff << endl;
    return 0;
}