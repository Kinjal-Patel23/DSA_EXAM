#include <iostream>

using namespace std;

class Stack
{
    private:

    int capacity;
    int *arr;
    int top;

    public:

    // constructor
    Stack(int capacity)
    {
        this->capacity = capacity;
        top = -1;
        arr = new int[capacity];
    }

    // destructor 
    ~Stack()
    {
        delete[] arr;

        cout << "memory deleted....." << endl;
    }

    void push(int element); // add element 
    void pop(); // remove element
    void display(); // display element 

};

void Stack::push(int element)
{
    if (this->top >= capacity - 1)
        {
            cout << "Stack is Overflow..." << endl;
        }
        else
        {
            top++;
            arr[top] = element; // add element in stack
            cout << "Element pushed successfully!" << endl;
        }
    cout << "----------------------------------" << endl;
}
void Stack::pop()
{
    if (this->top == -1)
    {
        cout << "Stack is empty....!!" << endl;
    }
    else
    {
        cout << "Stack element: " << arr[top] << " " << endl;
        top--;
    }
    cout << "----------------------------------" << endl;
}

void Stack::display()
{
    if (this->top == -1)
    {
        cout << "Stack is empty....!!" << endl;
    }
    else
    {
        cout << "Stack elements are: " << endl;
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << "----------------------------------" << endl;
}

int main()
{
    int capacity, user, element;

    cout << "Enter the stack capacity: ";
    cin >> capacity;

    Stack s(capacity); // stack object

    do
    {
        
        cout << "--------Menu--------" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;

        cout << "---------------------" << endl;

        cout << "Enter a valid option from the menu: ";
        cin >> user;
        cout << "---------------------" << endl;

        switch(user)
        {
            case 1:
                cout << "Enter any element: " ;
                cin >> element;
                s.push(element);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                user = 0;
                break;

            default:
                cout << "Invalid Input....!!" << endl;
                break;
        }

    } while (user != 0);
    

}