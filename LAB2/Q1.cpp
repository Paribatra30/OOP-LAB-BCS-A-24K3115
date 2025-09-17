//task no 1 by Pari Batra 24k3114
#include<iostream>
using namespace std;

// Function to swap two values
void SwapValues(int* a, int* b) {
    if (a == b) return;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    SwapValues(&a, &b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
