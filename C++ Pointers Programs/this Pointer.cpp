#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    // Constructor with same parameter names
    Student(string name, int age)
    {
        this->name = name; // this->name = class variable
        this->age = age;   // age = constructor parameter
    }

    // Function to display details
    void show()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }

    // Function for method chaining
    Student &increaseAge(int years)
    {
        this->age += years;
        return *this; // return current object
    }
};

int main()
{
    Student s("Hardeep", 20);

    s.show();

    cout << "After increasing age:\n";
    s.increaseAge(3).show(); // chaining

    return 0;
}
