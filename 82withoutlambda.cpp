#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isEven(int n) {
    return n % 2 == 0;
}
int main() {
    vector<int> numbers = {1, 3, 5, 8, 10, 13};
    auto it = find_if(numbers.begin(), numbers.end(), isEven);
    if(it != numbers.end()) {
        cout << "First even number found: " << *it << endl;
    } else {
        cout << "No even number found" << endl;
    }
    return 0;
}

