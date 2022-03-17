#include <iostream>
#include <conio.h>
#define max 100
using namespace std;
void insertionSort(int[], int);
void display(int[], int);
int main()
{
    int n=5, i;
    // cout<<("\nEnter the size of array\n");
    // cin >> n;
    // cout<<("\nEnter the elements of the array\n");
    // for (i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    int a[]= {7,4, 9, 6,2};
    insertionSort(a, n);
    display(a, n);
    getch();
    return 0;
}
void insertionSort(int a[], int n)
{
    int i, j, key;
    for (j = 1; j < n; j++)

    {
        key = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i = i - 1;
            cout << a[i+1] << " ";
        }
        a[i + 1] = key;
        cout << endl;
    }
   
}
void display(int a[], int n)
{
    int i;
    cout<<("\nthe elements in the array are\n");
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
