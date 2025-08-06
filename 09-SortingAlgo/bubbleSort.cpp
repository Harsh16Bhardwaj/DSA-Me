//Adjacent Swaps and bubbling up the largest element to the end
//Time Complexity: O(n^2)
//Think about the passes, after each pass, the largest element is at the end of the array

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = 0; j < nums.size() - 1 - i; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
        return nums;
    }
};
