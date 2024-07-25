#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int midpoint = s.length() / 2;
        int vowelCount1 = 0, vowelCount2 = 0;

        for (int i = 0; i < midpoint; i++) {
            if (vowels.count(s[i]) > 0) vowelCount1++;
            if (vowels.count(s[i + midpoint]) > 0) vowelCount2++;
        }

        return vowelCount1 == vowelCount2;
    }
};

int main() {
    Solution solution;

    // Test cases
    cout << (solution.halvesAreAlike("book") ? "true" : "false") << endl;
    cout << (solution.halvesAreAlike("textbook") ? "true" : "false") << endl;

    return 0;
}


