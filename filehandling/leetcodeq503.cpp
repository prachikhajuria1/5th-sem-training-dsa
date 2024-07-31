#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);
        stack<int> stack;
        // Iterate through the array twice to simulate circular array
        for (int i = 0; i < 2 * n; i++) {
            int num = nums[i % n];
            while (!stack.empty() && nums[stack.top()] < num) {
                result[stack.top()] = num;
                stack.pop();
            }
            if (i < n) {
                stack.push(i);
            }
        }
        return result;
    }
};
int main() {
    Solution solution;
    // Example usage
    vector<int> nums = {1, 2, 3, 4, 3};
    vector<int> result = solution.nextGreaterElements(nums);
    // Print the result
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

