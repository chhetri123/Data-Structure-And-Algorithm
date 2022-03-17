#include <iostream>
#include <conio.h>
 #define max 100
 using namespace std;
void mergeSort(int[], int, int);
void merge(int[], int, int, int);
void display(int[], int);
int main()
{
    int n, i, a[max];
    cout<<("\nEnter the size of array\n");

  cin>>n;
    cout<<("\nEnter the elements of the array\n");
    for (i = 0; i < n; i++)
  {
      cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    cout<<("\nThe sorted array is\n");
    display(a, n);
    getch();
    return 0;
}
void merge(int a[], int l, int h, int mid)
{
    int i, j, k, b[max];
    i = l;
    j = mid + 1;
    for (k = l; k <= h; k++)
    {
        if (i > mid)
        {
            b[k] = a[j];
            j++;
        }
        else if (j > h)
        {
            b[k] = a[i];
            i++;
        }
        else if (a[i] < a[j])

        {
            b[k] = a[i];
            i++;
        }
        else if (a[j] < a[i])
        {
            b[k] = a[j];
            j++;
        }
    }
    for (k = l; k <= h; k++)
    {
        a[k] = b[k];
    }
}
void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout<<"  "<< a[i];
    }
}
void mergeSort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        merge(a, l, h, mid);
    }
}
