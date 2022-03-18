#include<iostream>
#include<conio.h>
#define max 100
using namespace std;
int binarysearch(int a[], int l, int r, int key)
{
   int i, mid;
    if (l == r)
    {
   if (key == a[l])
        {
            return l;
        }
        else
        {
            return -1;
        }
    }
        else
        {
            mid = (l + r) / 2;

            if (key == a[mid])
            {
                return mid;
            }
            else if (key < a[mid])
            {
                return binarysearch(a, l, mid - 1, key);
            }
            else
            {
                return binarysearch(a, mid - 1, r, key);
            }
        }
    }
    

int main()
{
    int n, i, m, k, a[max];
    cout<<("\nEnter the size of array\n");
    cin >> n;
    cout<<("\nEnter the sorted elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<("Enter a key to search:");
    cin >> m;
    k = binarysearch(a, 0, n, m);
    if (k == -1)
    {
        cout<<("\nSearch Unsuccessful");
    }
    else
    {
        cout << ("\nSearch Successful at position ", k + 1);
    }
    getch();
    }

    
