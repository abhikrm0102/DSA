#include<iostream>

using namespace std;

int main()
{
    int n, i, j, count=1, total, m;
    cout<<"Enter num = ";
    cin>>n;
    total=n*n;

    for(i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            for(j=1; j<=n; j++)
            {
                cout<<count;
                count++;
                if(j%n==0)
                    cout<<endl;
                else
                    cout<<"*";
            }
        }
        else
        {
            for(j=n*i; j>n*(i-1); j--)
            {
                cout<<j;
                count++;
                if((j-1)%n==0)
                    cout<<endl;
                else
                    cout<<"*";
            }
        }
    }
    return 0;
}