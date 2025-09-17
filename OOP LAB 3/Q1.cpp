#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;      
    int rollNumber;   
};

int main() {
    Student s1;

    s1.name = "Pari";
    s1.rollNumber = 3115;

    cout << "Student Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.rollNumber << endl;

    return 0;
}
