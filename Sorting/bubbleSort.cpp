#include <iostream>
 #include<conio.h>
  #define max 100
  using namespace std;
void bubbleSort(int[], int);
void display(int[], int);
int main()
{
    int n, i, a[max];
    cout<<("\nEnter the size of array\n");
    cin>>n;
    cout<<("\nEnter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bubbleSort(a, n);
    cout<<("\nThe sorted array is\n");
    display(a, n);
    getch();
    return 0;
}
void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout<<"  "<< a[i];
    }
}

void bubbleSort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j+1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}