#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    cout<<endl<<"Printing the reverse\n";
    int n=num, rev=0, k=0;
    while(n!=0)
    {
        k=n%10;
        rev = rev*10 + k;
        n=n/10;
    }
    cout<<"The reverse is: "<<rev;

    cout<<endl<<endl<<"Checking if the number is a armstrong";
    int sum=0;
    n=num;
    while(n!=0)
    {
        k=n%10;
        n=n/10;
        sum += pow(k,3);
    }
    if(sum==num)
    {
        cout<<endl<<"The number is an armstrong";
    }
    else
    {
        cout<<endl<<"The number is not an armstrong";
    }
    return 0;
}
