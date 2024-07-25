#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        for (char& c : s) {
            if (c >= 'A' && c <= 'Z') {
                c = c - 'A' + 'a';
            }
        }
        return s;
    }
};

int main() {
    Solution solution;

    // Test cases
    cout << solution.toLowerCase("Hello") << endl;
    cout << solution.toLowerCase("here") << endl;
    cout << solution.toLowerCase("LOVELY") <<endl;

    return 0;
}


