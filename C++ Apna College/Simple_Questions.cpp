#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i,r=0;
    int f=0;
    cout<<"Enter a number :";
    cin>>n;

    //-----------------------------------------------------------

    cout<<"\nChecking, if the number is a prime :-\n";
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            cout<<"NON-PRIME";
            break;
        }
    }
    if (i==n)
    {
        cout<<"PRIME";
    }

    cout<<"\n\nVideo way :-\n";
    for (i=2;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            cout<<"NON-PRIME\n";
            f=1;
            break;
        }
    }
    if (f==0)
    {
        cout<<"PRIME\n";
    }

    //-----------------------------------------------------------

    cout<<"\nReverse the digit of a number\n";
    cout<<"Enter the number to be reversed : ";
    cin>>n;
    f=n;

    cout<<"\nThis Condition is for just printing the reverse\n";
    while (f>0)
    {
        cout<<f%10;
        f/=10;
    }
    cout<<endl;

    f=n;

    cout<<"\nThis condition is for finding the reverse and then printing";
    while (f>0)
    {
        i=f%10;
        f/=10;
        r=10*r+i;
    }
    cout<<endl<<r;
    return 0;
}