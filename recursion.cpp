#include <iostream>
using namespace std;
// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    unsigned long long sum = 0;
    for (int i = 1; i <= 4; ++i) {
        sum += factorial(i);
    }
    cout << "The sum of factorial from 1! to 4! is: " << sum << endl;
    return 0;
}

