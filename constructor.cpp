#include <iostream>
#include <string.h>

using namespace std;

class Rectangle
{
    public:

    int length;
    int breadth;

    Rectangle(int length, int breadth)
    {
        this -> length = length; // length assign
        this -> breadth = breadth; // breadth assign

        cout 
            << "Length: " << this -> length << endl
            << "Breadth: " << this -> breadth << endl
            << "Area of rectangle: " << length * breadth << endl; // calculate area of rectangle 
    }
};

int main()
{
    int length, breadth;

    // dynamic input

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;
    
    // create object
    Rectangle r(length, breadth);

}