#include<iostream>
  #include<conio.h>
   #define max 100
   using namespace std;
void selectionSort(int[], int);

void display(int[], int);
int main()
{
    int n, i, a[max];
    cout<<("\nEnter the size of array\n");
    cin >> n;
  
    cout << ("\nEnter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionSort(a, n);
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
        cout << "  " << a[i];
    }
}
void selectionSort(int a[], int n)
{
    int i, j, p=0, temp;
    for (i = 0; i < n; i++)
    {
        p = i;
        for (j = i + 1; j < n; j++)
        {
            if(a[j]<a[p]){
                p = j;
            }

        }
        temp = a[i];
        a[i] = a[p];
        a[p] = temp;
    }
}
