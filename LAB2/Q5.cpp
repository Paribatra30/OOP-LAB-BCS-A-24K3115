//task no 5 by pari batra 24k3115
#include<iostream>
#include <cstring>    // for strlen, strcpy, strcat
using namespace std;

int main() {
    // Dynamically allocate memory for two strings
    char *str1 = new char[100];
    char *str2 = new char[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // Allocate memory for concatenated string
    int totallength = strlen(str1) + strlen(str2) + 1;
    char *concatStr = new char[totallength];

    // Copy and concatenate
    strcpy(concatStr, str1);
    strcat(concatStr, str2);

    // Display results
    cout << "\nFirst String: " << str1;
    cout << "\nSecond String: " << str2;
    cout << "\nConcatenated String: " << concatStr << endl;

    // Free memory
    delete[] str1;
    delete[] str2;
    delete[] concatStr;

    return 0;
}
