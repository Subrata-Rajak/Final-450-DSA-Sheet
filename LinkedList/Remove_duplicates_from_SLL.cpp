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
Node *removeDuplicates(Node *head);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        Node *head = new Node();
        head = add(head, 10);
        head = add(head, 10);
        head = add(head, 10);
        head = add(head, 20);
        head = add(head, 30);
        head = add(head, 30);

        cout << "Before removing duplicates: ";
        printList(head);

        removeDuplicates(head);

        cout << "After removing duplicates: ";
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

Node *removeDuplicates(Node *head)
{
    if (head == null)
        return head;

    Node *temp = head;

    while (temp->next != null)
    {
        if (temp->data == temp->next->data)
        {
            Node *toBeDeleted = temp->next;
            temp->next = toBeDeleted->next;
            delete (toBeDeleted);
        }
        else
            temp = temp->next;
    }

    return head;
}