#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stack;
        unordered_map<int, int> nextGreater;
        // Process nums2 to find next greater element for each number
        for (int num : nums2) {
            while (!stack.empty() && stack.top() < num) {
                nextGreater[stack.top()] = num;
                stack.pop();
            }
            stack.push(num);
        }
        // Find next greater element for each number in nums1
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater.count(num) ? nextGreater[num] : -1);
        }
        return result;
    }
};
int main() {
    Solution solution;
    // Example usage
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
   vector<int> result = solution.nextGreaterElement(nums1, nums2);
    // Print the result
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
