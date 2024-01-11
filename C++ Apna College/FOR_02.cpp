#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k=1;

    cout << "Enter the n for number pyramid patterns :";
    cin >>n;

    cout <<endl<< "Number Pyramid\n";
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout <<i<<" ";
        }
        cout << endl;
    }

    cout<<"\nPrinting inverted number pattern\n";
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Printing number pyramid 2\n";
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout <<k<<" ";
            k++;
        }
        cout << endl;
    }

    cout<<"\nPrinting binary pattern using common method\n";
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if ((i%2!=0 && j%2!=0) || (i%2==0 && j%2==0))
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    cout<<"\nPrinting binary pattern using pattern analysis method\n";
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if ((i+j)%2==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    return 0;
}