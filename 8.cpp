/*

Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.

*/

class Solution {
public:
    int findKthPositive(vector<int>& A, int k) {
        int l = 0, r = A.size(), m;
        while (l < r) {
            m = (l + r) / 2;
            if (A[m] - 1 - m < k)
                l = m + 1;
            else
                r = m;
        }
        return l + k;
    }
};
