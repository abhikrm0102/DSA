#include <iostream>

using namespace std;

int facto(int n)
{
    int fact=1;
    for(int i=n; i>=1; i--)
    {
        fact*=i;
    }
    return fact;
}

int ncr(int n, int r)
{
    int ncr=facto(n)/(facto(n-r)*facto(r));
    return ncr;
}

//The Pascal triangle is the half triagle formed by the Binomial coefficients
void PT(int n)
{
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<ncr(i,j)<<"\t";
        }
    cout<<endl;
    }
    return;
}

int main()
{
    int n;
    cout<<"Enter the number for pascal triangle: ";
    cin>>n;
    PT(n);
    return 0;
}