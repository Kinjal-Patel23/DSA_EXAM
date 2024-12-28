#include <iostream>

using namespace std;

class Student
{
    private:
        int id;           
        string name;     
        float marks;    

    public:

        // Constructor
        Student(int id, string name, float marks)
        {
            this->id = id;
            this->name = name;
            this->marks = marks;
        }

        // add student
        void create(int id, string name, float marks)
        {
            this->id = id;
            this->name = name;
            this->marks = marks;
            cout << "Student created successfully!" << endl;
        }

        // display student information
        void read()
        {
            cout << "Student ID: " << id << endl;
            cout << "Student Name: " << name << endl;
            cout << "Student Marks: " << marks << endl;
            cout << "---------------------------------" << endl;
        }

        // update student information
        void update(string newName, float newMarks)
        {
            name = newName;
            marks = newMarks;
            cout << "Student information updated successfully!" << endl;
        }

        // delete student information
        void deleteStudent()
        {
            id = 0;
            name = "";
            marks = 0.0;
            cout << "Student information deleted successfully!" << endl;
        }
};

int main()
{
    int id;
    string name;
    float marks;
    int choice;

    // Creating an object
    Student student1(0, "", 0.0); 

    do
    {
        // Displaying menu options
        cout << "-------- Menu --------" << endl;
        cout << "1. Create Student" << endl;
        cout << "2. Read Information" << endl;
        cout << "3. Update Information" << endl;
        cout << "4. Delete Student" << endl;
        cout << "5. Exit" << endl;
        cout << "--------------------------------------" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cout << "--------------------------------------" << endl;

        switch (choice)
        {
        case 1: 
            cout << "Enter Student ID: ";
            cin >> id;
            cout << "Enter Student Name: ";
            cin >> name; 
            cout << "Enter Student Marks: ";
            cin >> marks;
            student1.create(id, name, marks); 
            break;

        case 2: 
            student1.read();
            break;

        case 3: 
            cout << "Enter new Name: ";
            cin >> name; 
            cout << "Enter new Marks: ";
            cin >> marks;
            student1.update(name, marks);
            break;

        case 4:
            student1.deleteStudent(); 
            break;

        case 5: 
            choice == 0;
            cout << "Exiting....." << endl;
            break;

        default:
            cout << "Invalid choice...." << endl;
            break;
        }
    } while (choice != 0);

}
