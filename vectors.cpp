#include <iostream>
#include <vector>

using namespace std;

class Vect
{
    private:

    vector<int> v; // create a vector to store element

    public:

    // add element 
    void add(int element)
    {
        v.push_back(element);
        cout << "Element pushed successfully....!!" << endl;
        cout << "---------------------------------" << endl;
    }

    // remove element
    void remove()
    {
        if (v.empty())
        {
            cout << "Vector is empty....!" << endl;
        }
        else
        {
            cout << "Vector element: " << v.back() << endl;
            v.pop_back();
        }   

        cout << "----------------------------" << endl; 
    }

    // display element
    void display()
    {
        if (v.empty())
        {
            cout << "Vector is empty...!!" << endl;
        }
        else
        {
            cout << "Vector elements are: ";
            for (int element : v)
            {
                cout << element << " ";
            }
            cout <<  endl;
        }
        cout << "------------------------" << endl;
    }
    int size()
    {
        return v.size(); // vector ki size return hoti hai
        cout << "----------------------" << endl;
    }
    
};

int main()
{
    int capacity, user, element;

    // dynamic input
    cout << "Enter the vector capacity: ";
    cin >> capacity; 

    Vect v1; // object

    do
    {
        cout << "----- MENU -----" << endl;
        cout << "1. ADD" << endl;
        cout << "2. REMOVE" << endl;
        cout << "3. DISPLAY" << endl;

        cout << "--------------------------" << endl;

        cout << "Enter the valid option from the menu: ";
        cin >> user;

        cout << "--------------------------" << endl;

        switch (user)
        {
        case 1:
            if (v1.size() >= capacity)
            {
                cout << "Vector is Full...." << endl;
            }
            else
            {
                cout << "Enter any element: ";
                cin >> element;
                v1.add(element);
                v1.display();
            }
            break;

        case 2:
            v1.remove();
            break;

        case 3:
            v1.display();
            break;

        case 4: // exit the program
            user = 0;
            break;
        
        default: // default case
            cout << "Invalid Input.....!!" << endl;
            break;
        }

    } while (user != 0);
    
}