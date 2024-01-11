#include <iostream>

using namespace std;

void fibo (int n)
{
    int t1=0, t2=1, tn;
    cout<<"Printing the fibonacci series\n";
    for(int i=1; i<=n; i++)
    {
        cout<<t1<<endl;
        tn=t1+t2;
        t1=t2;
        t2=tn;
    }
    return;
}

void facto(int n)
{
    int fact=1;
    for(int i=n; i>=1; i--)
    {
        fact*=i;
    }
    cout<<endl<<fact;
    return;
}

int main()
{
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    fibo(n);
    facto(n);
    return 0;
}