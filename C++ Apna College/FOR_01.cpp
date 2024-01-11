#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int col, row, i, j, n;

    cout<<"Enter the value of rows than column\n";
    cin>>row>>col;

    cout<<"\nPrinting rectangle\n";
    for(i=1;i<=row;i++)
    {
        for (j=1;j<=col;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout<<"\nNow printing hollow rectangle\n";
    for (i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==1 || i==row || j==1 || j==col)
            {
               cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<"\nNow enter the number for inverted pyramid\n";
    cin>>n;
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"\nNow printing inverted pyramid after 180 deg rotation\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
                cout<<"  ";
            else if(j>n-i)
                cout<<"* ";
        }
        cout<<endl;
    }
getch();
    return 0;
}
