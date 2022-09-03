/* 

Given an unsorted array of integers nums, return the length of the longest continuous increasing subsequence (i.e. subarray). 
The subsequence must be strictly increasing.

A continuous increasing subsequence is defined by two indices l and r (l < r) such that it is [nums[l], nums[l + 1], ..., nums[r - 1], nums[r]] 
and for each l <= i < r, nums[i] < nums[i + 1].

*/

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()<=1)return nums.size();
        int answer=1,count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                count++;
                answer=max(answer,count);
            }
            else{
                count=1;
            }
        }
        return answer;
    }
};
