#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k, l;
    cout << "Enter the number for patterns :";
    cin>>n;

    cout<<endl<<"Printing Butterfly with condition for *\n";
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=2*n;j++)
        {
            if (j<=i || j>(2*n)-i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=2*n;j++)
        {
            if (j<=i || j>(2*n)-i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    cout<<endl<<"Printing Butterfly with condition for \" \" \n";
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<"* ";
        }

            k= 2*n - 2*i;
        for (j=1;j<=k;j++)
        {
            cout<<"  ";
        }
        for (j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            cout<<"* ";
        }

            k= 2*n - 2*i;

        for (j=1;j<=k;j++)
        {
            cout<<"  ";
        }
        for (j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"\nPrinting the rhombus pattern\n";
    for (i=n;i>=1;i--)
    {
        for (j=1;j<i;j++)
        {
            cout<<" ";
        }
        for (k=1;k<=n;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"\nPrinting number pyramid my way\n";
    l=1;
    for (i=n;i>=1;i--)
    {
        for (j=1;j<i;j++)
        {
            cout<<" ";
        }
        for (k=1;k<=l;k++)
        {
            cout<<k<<" ";
        }
        l++;
        cout<<endl;
    }

    cout<<"\nPrinting number pyramid video way\n";
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for (j=1;j<=i;j++)
        {
            cout << j << " ";
        }
        cout<<endl;
    }

    cout<<"\nPrinting Palindromic Number Pattern my way\n";
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for (j=i;j>1;j--)
        {
            cout<<j<<" ";
        }
        for (j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<"\nPrinting Palindromic Number Pattern video way\n";
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        k=i;
        for (;j<=n;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for (;j<=n+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }

    cout<<"\nPrinting Star Pattern my way\n";
    for (i=1;i<=n;i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for (j=2;j<=i;j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }
    for (i=n;i>=1;i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for (j=2;j<=i;j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }

    cout<<"\nPrinting Star Pattern video way\n";
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for (j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for (j=1;j<=2*i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"\nPrinting Zig-Zag Pattern my way\n";
    for (i=1;i<=3;i++)
    {
        for (j=1;j<=3*n;j++)
        {
            if ((i==1 && (i+j)%4==0) || (i==2 && (i+j)%2==0) || (i==3 && (i+j)%4==0))
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

    cout<<"\nPrinting Zig-Zag Pattern video way\n";
    for (i=1;i<=3;i++)
    {
        for (j=1;j<=3*n;j++)
        {
            if ((i+j)%4==0 || (i==2 && j%4==0))
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

    return 0;
}
