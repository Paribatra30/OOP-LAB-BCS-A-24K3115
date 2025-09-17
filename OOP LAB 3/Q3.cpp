#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2;  

public:
    void setNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }

    int add() {
        return num1 + num2;
    }
};

int main() {
    Calculator c1;

    c1.setNumbers(10, 20);

    cout << "Sum: " << c1.add() << endl;

    return 0;
}
