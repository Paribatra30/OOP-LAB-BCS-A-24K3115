//Lab2 task2 by pari batra 24k3115
#include<iostream>
using namespace std;

// Function to calculate sum of array using pointer arithmetic
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
    int result = sumArray(arr, size);
    cout << "Sum of array elements = " << result << endl;
    delete[] arr;
    return 0;
}
