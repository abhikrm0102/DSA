#include<iostream>

using namespace std;

int main()
{
    int n, i, j, count=0, x=0, num;
    cout<<"Enter num = ";
    cin>>n;

    for(i=0; i<(2*n-1); i++)
    {
        count=0; x=0;
        for(j=0; j<(2*n-1); j++)
        {
            num=n-count;
            cout<<num<<" c"<<count<<" x"<<x<<" i"<<i<<" j"<<j<<"    ";
            if(num>n-i || n-i<0)     /* || num<=n-j*/
            {
                if(x<(n-1))
                {
                    count++;
                    x++;
                }
                else
                    count--;
            }
        }
        cout<<endl;
    }
    return 0;
}