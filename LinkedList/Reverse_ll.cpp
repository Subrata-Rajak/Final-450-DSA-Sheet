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
Node *reverseList(Node *head);

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        Node *head = new Node();
        int length;
        cin >> length;

        for (int index = 0; index < length; index++)
        {
            int value;
            cin >> value;

            head = add(head, value);
        }

        head = reverseList(head);

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

Node *reverseList(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}