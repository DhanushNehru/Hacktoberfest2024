#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

int main()
{
    head = (struct node*)malloc(sizeof(struct node));

    struct node *temp = head;

    int n;
    cout << "Enter the number of entries you want to make: -\n";
    cin >> n;

    cout << "Enter the element you want to enter: -\n";
    cin >> head->data;

    for (int i = 1; i < n; i++)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        temp->next = newnode;

        int a;
        cout << "Enter the element you want to enter: -\n";
        cin >> a;

        newnode->data = a;
        newnode->next = NULL;

        temp = newnode;
    }

    temp = head;
    while (temp != NULL) 
    {
        cout << "%d ",temp->data;
        temp = temp->next;
    }

    // Free allocated memory
    temp = head;
    while (temp != NULL)
    {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}