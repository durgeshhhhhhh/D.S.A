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

    void push_front(int val) // O(1)
    {

        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) // O(1)
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

    void pop_front() // O(1)
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }

        Node *temp = head;

        head = head->next;

        temp->next = NULL;

        delete temp;
    }

    void pop_back() // O(n)
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
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

    void insert(int val, int pos) // O(n)
    {
        if (pos < 0)
        {
            cout << "Invalid position\n";
            return;
        }

        if (pos == 1)
        {
            push_front(val);
            return;
        }

        Node *temp = head;

        for (int i = 1; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position\n";
                return;
            }
            temp = temp->next;
        }

        Node *newNode = new Node(val);

        newNode->next = temp->next;

        temp->next = newNode;
    }

    int search(int val) // O(n)
    {
        Node *temp = head;

        int idx = 0;
        while (temp->next != NULL)
        {
            if (temp->data == val)
            {
                return idx;
            }

            temp = temp->next;
            idx++;
        }

        return -1;
    }

    void printLL() // O(n)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main()
{
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printLL();
    cout << endl;

    ll.push_back(5);

    ll.printLL();
    cout << endl;

    ll.pop_front();

    ll.printLL();
    cout << endl;

    ll.pop_back();

    ll.printLL();
    cout << endl;

    ll.insert(4, 2);

    ll.printLL();
    cout << endl;

    cout << ll.search(3);

    cout << endl;

    return 0;
}