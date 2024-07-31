#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
};

int main() {
    Solution solution;

    // Test cases
    cout << "1 is power of two: " << (solution.isPowerOfTwo(1) ? "true" : "false") << endl;
    cout << "16 is power of two: " << (solution.isPowerOfTwo(16) ? "true" : "false") << endl;
    cout << "3 is power of two: " << (solution.isPowerOfTwo(3) ? "true" : "false") << endl;

    return 0;
}
