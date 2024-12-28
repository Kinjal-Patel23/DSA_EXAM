#include <iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node *next;
};

int middle(Node *HEAD)
    {
        Node *firstNode = HEAD;
        Node *secondNode = HEAD;

        while (secondNode != NULL && secondNode -> next != NULL) // Jab tak secondNode list ke end me na poch jaye, tab tak loop chalegi
        {
            firstNode = firstNode -> next; // move one step
            secondNode = secondNode -> next -> next; // move two step
        }
        return firstNode -> data; // return middle node 
    }

int main()
{
    Node *PTR = NULL;

    // create the head 
    Node *HEAD = NULL;
    HEAD = new Node();
    HEAD->data = 54;
    HEAD->next = NULL;

    PTR = HEAD;
    
    // add second node
    Node *current = new Node();
    current -> data = 34;
    current -> next = NULL;
    HEAD -> next = current;

    // add third node
    current = new Node();
    current -> data = 89;
    current -> next = NULL;
    HEAD -> next -> next = current;

    // add fourth node
    current = new Node();
    current -> data = 200;
    current -> next = NULL;
    HEAD -> next -> next -> next = current;

    // add fifth node
    current = new Node();
    current -> data = 500;
    current -> next = NULL;
    HEAD -> next -> next -> next -> next = current;


    // display elements
    cout << "The elements of Linked List : " << endl;
    while (PTR != NULL)
    {
        cout << PTR -> data << endl;
        // cout << PTR -> next << endl;
        PTR = PTR->next;
    }
    cout << endl;

    cout << "Middle element is : " << middle(HEAD);
}