#include <iostream>
#include <map>
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
bool detectLoop(Node *head);

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

        printList(head);

        if(detectLoop(head))
            cout << "Loop is present in the SLL" << endl;
        else
            cout << "Loop is not present in the SLL" << endl;
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

bool detectLoop(Node *head)
{
    if(head == null)
        return null;

    map<Node *, bool> visited;

    Node *temp = head;

    while(temp != null)
    {
        if(visited[temp])
            return true;

        visited[temp] = true;

        temp = temp->next;
    }

    return false;
}