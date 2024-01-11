/*
#include <iostream>
#include <math.h>
#include <string.h>

or
*/

#include <bits/stdc++.h>    //

using namespace std;

void btd(int b);
void otd(int o);
void htd(string h);
void dtb(int d);
void dto(int d);
void dth(int d);

int main()
{
    int n,b,d,o;
    string h;

    cout<<"1. Binary to Decimal \n2. Octal to Decimal \n3. Hexadecimal to Decimal \n4. Decimal to Binary \n5. Decimal to Octal \n6. Decimal to Hexadecimal \n";
    cout<<"Choice: ";
    cin>>n;

    cout<<endl<<"Enter the number for conversion: ";

    switch (n)
    {
    case 1:
        cin>>b;
        btd(b);
        break;
    
    case 2:
        cin>>o;
        otd(o);
        break;

    case 3:
        cin>>h;
        htd(h);
        break;

    case 4:
        cin>>d;
        dtb(d);
        break;

    case 5:
        cin>>d;
        dto(d);
        break;

    case 6:
        cin>>d;
        dth(d);
        break;
    
    default:
        cout<<endl<<"Invalid Input";
        break;
    }
    
    return 0;
}

void btd(int b)
{
    int d=0, i=0;
    while(b!=0)
    {
        d += (b%10)*pow(2,i);
        b /= 10;
        i++;
    }
    cout<<"Decimal = "<<d;
}

void otd(int o)
{
    int d=0, i=0;
    d += (o%10)*pow(8,i);
    o /= 10;
    i++;
    cout<<"Decimal = "<<d;
}

void htd(string h)
{
    int d = 0, p=0;
    int j = h.size();
//  int j = strlen(h);        We can't use this but why????
    for (int i=j-1; i >=0; i--)
    {
        if (h[i] >= '0' && h[i] <= '9')
        {
            d += ((h[i]-'0') * pow(16,p));
        }
        else if (h[i] >= 'A' && h[i] <= 'F')
        {
            d += (h[i] - 'A' + 10) * pow(16,p);
        }
        p++;
    }
    cout<<"Decimal = "<<d;
}

/*  OR WE CAN SIMPLIFY IT WITHOUT #include<math.h> AND pow(num, power);

void htd(string h)
{
    int d = 0, p=0;
    int j = h.size();
    p=1;
    for (int i=j-1; i >=0; i--)
    {
        if (h[i] >= '0' && h[i] <= '9')
        {
            d += ((h[i]-'0') * p);
        }
        else if (h[i] >= 'A' && h[i] <= 'F')
        {
            d += (h[i] - 'A' + 10) * p;
        }
        p*=16;
    }
    cout<<"Decimal = "<<d;
}

*/

void dtb(int d)
{
    int b=0, x=1;
    while(x<=d)
    {
        x*=2;
        
    }
    cout<<b;
}

void dto(int d)
{
    int o;
    cout<<o;
}

void dth(int d)
{
    int h;
    cout<<h;
}
