#include<iostream>
#include <conio.h>
using namespace std;
struct node
{
    int info;
    struct node *next;
};

typedef struct node NodeType;
NodeType *head = NULL;
void insertatfirst(int);
void insertatlast(int);
void insertatpos(int);
void deleteatfirst();
void deleteatlast();
void deleteatpos();
void display();
void searchitem();
int main()
{
    int choice;
    int item;
    do
    {
        cout<<("\nMenu for program");
        cout<<("\n1.Insert at first\n2.Insertatgivenposition\n3.Display\n4.Exit\n5.Insert at last position\n6.Delete at first\n7.Delete at position\n8.Delete at last\n9.Search an item");
        cout<<("\n\nEnter your choice:");
        cin >> choice;
    } while (choice < 0 && choice >=10);
    switch (choice)
    {
    case 1:
        cout<<("Enter the item:");
        cin >> item;
        insertatfirst(item);
        break;
    case 2:
        cout<<("Enter the item:");
        cin >> item;

        insertatpos(item);
        break;
    case 3:

        cout<<("\nThe item in the list are:\n");
        display();
        break;
    case 4:
        exit(0);
        break;
    case 5:
        cout<<("Enter the item:");
        cin >> item;
        insertatlast(item);
        break;
    case 6:
        deleteatfirst();
        break;
    case 7:
        deleteatpos();
        break;
    case 8:
        deleteatlast();
        break;
    case 9:
        searchitem();
        break;
    default:
        cout<<("\nWrong entered");
        getch();
        return 0;
    }
    main();
}
void insertatfirst(int item)
{
    NodeType *nnode;
    nnode = new NodeType;
    nnode->info = item;
    nnode->next = NULL;
    if (head == NULL)
    {
        head = nnode;
    }
    else
    {

        nnode->next = head;
        head = nnode;
    }
}

void insertatlast(int item)
{
    NodeType *nnode;
    NodeType *temp;
    nnode = new NodeType;
    nnode->info = item;
    nnode->next = NULL;
    if (head == NULL)
    {
        head = nnode;
    }

    else if (head->next == NULL)
    {
        head->next = nnode;
    }
    else
    {

        temp = head;
        while (temp->next != NULL)
        {

            temp = temp->next;
        }
        temp->next = nnode;
    }
}
void insertatpos(int item)
{
    NodeType *nnode;
    NodeType *temp;
    nnode = new NodeType;
    nnode->info = item;
    nnode->next = NULL;
    int pos, i;
    if (head == NULL)
    {
        head = nnode;
    }

    else
    {

        temp = head;
        cout<<("\nEnter the position");

        cin >> pos;
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        nnode->next = temp->next;
        temp->next = nnode;
    }
}
void display()
{
    NodeType *temp;
    if (head == NULL)
    {
        cout << ("List is empty");
        
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            cout << " " << temp->info;
            temp = temp->next;
        }
    }
}
void deleteatfirst()
{
    if (head == NULL)

    {
        cout<<("\nList is empty.");
    }
    else
    {
        NodeType *temp;
        temp = head;
        cout<<("Item deleted is %d", head->info);
        head = head->next;
        delete (temp);
    }
}

void deleteatlast()
{
    NodeType *temp;
    if (head == NULL)
    {
        cout<<("\nList is empty.");
        
    }
    else if (head->next == NULL)
    {
        temp = head;
        cout<<("Item deleted is %d", head->info);
        head = head->next;
        delete (temp);
    }
    else
    {

        temp = head;
        while (temp->next->next != NULL)

        {
            temp = temp->next;
        }
        cout<<("Deleted item is %d", temp->next->info);
        delete (temp->next);
        temp->next = NULL;
    }
}
void deleteatpos()
{
    NodeType *temp;
    NodeType *p;
    int pos, i;
    if (head == NULL)
    {
        cout<<("\nList is empty.");
        
    }
    else
    {

        cout<<("\nEnter the position:");
        cin >> pos;
        temp = head;
        for (i = 1; i < pos - 1; i++)
        {

            temp = temp->next;
        }
        cout<<("Deleted item is %d", temp->next->info);
        p = temp->next;
        temp->next = p->next;

        delete (p);
    }
}
void searchitem()
{
    NodeType *temp;
    int key;
    temp = head;
    if (head == NULL)
    {
    }
    else
    {

        cout<<("\nList is empty.");
        

        cout<<("Enter the search key");
        cin >> key;
        if (temp != NULL)
        {
            while (temp != NULL)
            {

                if (temp->info == key)
                {
                    cout<<("Search successful");
                    break;
                }
                temp = temp->next;
            }
        }
        else

        {
            cout<<("\nSearch Unsuccessful.");
        }
    }
}
