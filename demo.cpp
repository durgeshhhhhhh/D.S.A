#include <bits/stdc++.h>
using namespace std;

// class Node
// {

// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class List
// {
//     Node *head;
//     Node *tail;

// public:
//     List()
//     {
//         head = tail = NULL;
//     }

//     void push_front(int val)
//     {
//         Node *newNode = new Node(val);

//         if (head == NULL)
//         {
//             head = tail = newNode;
//         }
//         else
//         {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void push_back(int val)
//     {
//         Node *newNode = new Node(val);

//         if (head == NULL)
//         {
//             head = tail = newNode;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void pop_back()
//     {
//         if (head == NULL)
//         {
//             cout << "List is empty";
//             return;
//         }

//         Node *temp = head;

//         while (temp->next != tail)
//         {
//             temp = temp->next;
//         }

//         temp->next = NULL;

//         delete tail;

//         tail = temp;
//     }

//     void pop_front()
//     {
//         if (head == NULL)
//         {
//             cout << "List is empty";
//             return;
//         }

//         Node *temp = head;

//         head = head->next;

//         delete temp;
//     }

//     int front()
//     {
//         if (head == NULL)
//             return NULL;
//         else
//             return head->data;
//     }

//     int size()
//     {
//         if (head == NULL)
//             return NULL;

//         Node *temp = head;

//         int cnt = 0;

//         while (temp != NULL)
//         {
//             cnt++;
//             temp = temp->next;
//         }

//         return cnt;
//     }

//     void printLL()
//     {
//         Node *temp = head;

//         while (temp != NULL)
//         {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }

//         cout << "NULL" << endl;
//     }
// };

class ST
{
    list<int> ll;

public:
    void push(int val)
    {
        ll.push_front(val);
    }

    void pop()
    {
        ll.pop_front();
    }

    int top()
    {
        return ll.front();
    }

    bool isEmpty()
    {
        return ll.size() == 0;
    }
};

int main()
{
    ST s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}