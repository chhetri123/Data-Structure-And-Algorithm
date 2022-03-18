#include<iostream>
#include<conio.h>
 #define max 100
using namespace std;

void maxheapify(int a[], int n, int i)
{
    int largest = i;       // Initialize largest as root 
    int left = 2 * i + 1;  // left child
    int right = 2 * i + 2; // right child
    // If left child is larger than root
    if (left < n && a[left] > a[largest])
        largest = left;
    // If right child is larger than root
    if (right < n && a[right] > a[largest])
        largest = right;
    // If root is not largest
     if (largest != i) {
    // swap a[i] with a[largest] 
    int temp = a[i];
    a[i] = a[largest];
    a[largest] = temp;

    maxheapify(a, n, largest);
}
}
void heapSort(int a[], int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
        maxheapify(a, n, i);

    for (i = n - 1; i >= 0; i--)
    {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        maxheapify(a, i, 0);
    }
}
void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout <<" "<< a[i];
    }
}
int main()
{
    int n, i, a[max];
    cout<<("\nEnter the size of array\n");
    scanf("%d", &n);
    cout<<("\nEnter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    heapSort(a, n);
    cout<<("\nThe sorted array is\n");
    display(a, n);
    getch();

    return 0;
}
