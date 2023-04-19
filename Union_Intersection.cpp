#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cout <<"Enter the value of n amd m:" <<endl;
    cin >> n >> m;

    int a[n], b[m];

    for(int i=0; i <n; i++)
    {
        cin >> a[i];
    }

    for(int j = 0; j<m; j++)
    {
        cin >> b[j];
    }


    //Intersection
    cout << "Intersection: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for( int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
                cout << a[i] << " ";
        }
        cout<<endl;
    }
    
    //Union
    cout << "Union:" <<endl;
    int k = 0;
    int c[k];

   for(int i=0;i<n;i++)
   {
    int j;
      for(j=0; j<k; j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k)
       {
          c[k]=a[i];
          k++;
       }
    }
    // copy element of set B in set C
   for(int i=0;i<m;i++)
   {
    int j;
      for(int j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k)
     {
       c[k]=b[i];
       k++;
     }
   }

   printf("Union of set A and B is:-\n");
    for(int i=0;i<k;i++)
      printf("%d ",c[i]);
        }
    }


    return 0;
}