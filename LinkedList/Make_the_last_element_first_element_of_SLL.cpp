#include <iostream>
#define null NULL
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = null;
    }

    Node(int value)
    {
        data = value;
        next = null;
    }

    Node(int value, Node *pointer)
    {
        data = value;
        next = pointer;
    }
};

Node *add(Node *head, int value);
void printList(Node *head);
Node *lastToFirst(Node *head);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        Node *head = new Node();
        head = add(head, 10);
        head = add(head, 20);
        head = add(head, 30);
        head = add(head, 40);
        head = add(head, 50);

        cout << "Before moving the last to front: ";
        printList(head);

        head = lastToFirst(head);

        cout << "After moving the last to front: ";
        printList(head);
    }
    return 0;
}

Node *add(Node *head, int value)
{
    Node *newNode = new Node(value);

    if (head->data == 0)
    {
        return newNode;
    }

    Node *curr = head;

    while (curr->next != null)
        curr = curr->next;

    curr->next = newNode;
    return head;
}

void printList(Node *head)
{
    Node *curr = head;

    while (curr != null)
    {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

Node *lastToFirst(Node *head)
{
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    Node *last = temp->next;
    temp->next = null;
    last->next = head;
    return last;
}