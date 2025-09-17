#include <iostream>
#include <string>
using namespace std;

class Concrete {
private:
    string message;   

public:
    Concrete(string msg) {
        message = msg;
    }

    void displayMessage() {
        cout << "Message: " << message << endl;
    }
};

int main() {
    Concrete obj("Hello, this is a Concrete class!");

    obj.displayMessage();

    return 0;
}
