#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{

    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LinkedList is empty";
            return;
        }
        Node *temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "List is Empty";
            return;
        }
        Node *temp = head;

        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;

        delete tail;

        tail = temp;
    }

    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid position\n";
            return;
        }

        if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position\n";
            }

            temp = temp->next;
        }

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void printLL()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;

    ll.push_front(3);
    ll.push_front(2);

    ll.printLL();
    cout << endl;

    ll.push_front(1);

    ll.printLL();
    cout << endl;

    ll.push_back(0);

    ll.printLL();
    cout << endl;

    ll.pop_front();

    ll.printLL();
    cout << endl;

    ll.pop_back();

    ll.printLL();
    cout << endl;

    ll.insert(4, 1);

    ll.printLL();
    cout << endl;

    return 0;
}