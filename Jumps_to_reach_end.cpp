//To calculate the minimum no. of jumps to reach the end.

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int j = 1;
    int jump, count = 0;
    while(j <= n)
    {
        if (a[j] == 0)
        {
            cout << "Can't reach the end!";
            break;
        }
        else
        {
            j = j + a[j];
            count++;
        }
    }
    cout << "No. of jumps: " << count <<endl;
    return 0;
}