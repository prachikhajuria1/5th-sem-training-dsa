#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    string address;

public:
    // Constructor
    Student(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }

    // Function to set (put) data
    void setData(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }

    // Function to get data
    void getData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }

    // Function to update data
    void updateData(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }
};

int main() {
    // Create a student object
    Student student("John", 20, "123 Main Street");

    // Display initial data
    cout << "Initial data:" << endl;
    student.getData();

    // Update student data
    student.updateData("Alice", 22, "456 Elm Street");

    // Display updated data
    cout << "\nUpdated data:" << endl;
    student.getData();

    return 0;
}
