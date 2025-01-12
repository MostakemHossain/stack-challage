#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    // push
    void push(int data)
    {
        Node *newNode = new Node(data);
        if (top == NULL)
        {
            top = newNode;
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
    }

    // pop
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            int data = top->data;
            Node *temp = top;
            top = top->next;
            delete temp;
            cout << data << endl;
        }
    }

    // peek
    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return top->data;
        }
    }

    // empty
    bool empty()
    {
        return top == NULL;
    }

    // display
    void display()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Top element: " << st.peek() << endl;

    st.display();

    st.pop();
    cout << "After popping an element:" << endl;

    st.display();

    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
