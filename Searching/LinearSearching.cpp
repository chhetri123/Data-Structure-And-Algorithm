#include <iostream> 
#include<conio.h>
 #define max 100
 using namespace std;
int linearsearch(int a[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int n, i, m, k, a[max];
    cout<<("\nEnter the size of array\n");
    cin >> n;
    cout<<("\nEnter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<("Enter a key to search:");
    cin >> m;
    k = linearsearch(a, n, m);
    if (k == -1)
    {
        cout << ("\n Search Unsucessful");
    }
    else
    {
        cout << ("\nSearch Successful at position", k+1);
    }
        getch();



    return 0;
}


