// Selection Sort Algorithm
// Time Complexity: O(n^2)
// Think about the selection of minimums, after each selection, swap the min with i
// The array is sorted up to that point
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int min;
        for (int i = 0; i < nums.size() - 1; i++) {
            min = i;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[min]) {
                    min = j;
                }
            }
            swap(nums[i], nums[min]);
        }
        return nums;
    }
};
