/*

Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, 
sort them in decreasing order.

Return the sorted array.

*/

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int a: nums)
            count[a]++;
        sort(begin(nums), end(nums), [&](int a, int b) {
            return count[a] == count[b] ? a > b : count[a] < count[b];
        });
        return nums;
    }
};
