//Write a program to find the duplicate number from string.
#include <iostream>
using namespace std;
int main() {
    const char* str = "jhon236312Doe14@gmail8.com8";
    int count[10] = {0}; // Array to store count of digits 0-9
    // Count occurrences of each digit
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count[str[i] - '0']++;
        }
    }
    // Print duplicates
    for (int i = 0; i < 10; i++) {
        if (count[i] > 1) {
            cout << i << " - number " << count[i] << " times" << endl;
        }
    }
    return 0;
}

