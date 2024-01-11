#include <bits/stdc++.h>
using namespace std;
 
/* Function prints Intersection of arr1[] and arr2[]
m is the number of elements in arr1[]
n is the number of elements in arr2[] */
void printIntersection(int arr1[], int arr2[], int m, int n)
{cout<<endl<<"Intersection Set:\n";
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
 
/* Driver program to test above function */
int main()
{
    int arr1[] = { 1, 2, 3, 4};
    int arr2[] = { 3, 4, 5, 6, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    cout<<endl<<"1st Set:\n";
    for (int i = 0; i < m; i++)
    {
        cout<<arr1[i]<<" ";
    }

    cout<<endl<<"2nd Set:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<<" ";
    }    
    cout<<endl;
    // Function calling
    printIntersection(arr1, arr2, m, n);
 
    return 0;
}