#include <iostream>

using namespace std;

int sn(int n)
{
    int sum;
    sum=n*(n+1)/2;
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the number for sum for first n numbers: ";
    cin>>n;
    cout<<sn(n);
    return 0;
}