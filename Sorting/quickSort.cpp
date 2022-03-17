#include<iostream>
 #include<conio.h> 
 #define max 100
 using namespace std;
void quickSort(int[], int, int);
int partition(int[], int, int);
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
    quickSort(a, 0, n - 1);

    getch();

    cout<<("\nThe sorted array is\n");
    display(a, n);

    return 0;
}
int partition(int a[], int l, int h)
{
    int L, R, k, b, pivot;
    L = l;
    R = h;
    pivot = a[l];
    while (L < R)
    {
        while (a[L] < pivot && L <= h)
        {
            L++;
        }
        while (a[R] > pivot)
        {
        }
        if (L < R)
        {
        }
    }

    R--;

    k = a[L];
    a[L] = a[R];
    a[R] = k;

    b = a[R];
    a[R] = pivot;

    pivot = b;
    return R;
}
void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout<<("%d\t", a[i]);
    }
}
void quickSort(int a[], int l, int h)
{

    int j;
    if (l < h)
    {
        j = partition(a, l, h);
        quickSort(a, l, j - 1);
        quickSort(a, j + 1, h);
    }
}
