#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;   

private:
    int rollNumber;  

public:
    void setRollNo(int r) {
        rollNumber = r;
    }

    int getRollNo() {
        return rollNumber;
    }
};

int main() {
    Student s1;

    s1.name = "Pari";

    s1.setRollNo(3115);

    cout << "Student Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.getRollNo() << endl;

    return 0;
}
