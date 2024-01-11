#include <iostream>

using namespace std;

int main()
{
    int n, m, o;
    o=n+1;
    cout<<"Enter the number of element in first set then second set\n";
    cin>>n>>m;
    int a[n], b[m], c[m+n];

    cout<<"Now enter the elements of 1st set\n";
    for ( int i = 0; i < n; i++)
    {
        cin>>a[i];
        c[i]=a[i];
    }

    cout<<"Now enter the elements of 2nd set\n";
    for ( int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i]!=b[j])
            {
                c[o]=b[j];
                o++;
            }
            
        }
        
    }

    for ( int i = 0; i < o; i++)
    {
        cout<<c[i]<<"\t";
    }
    return 0;
    
}