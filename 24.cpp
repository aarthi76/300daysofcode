/*

You are given two lists of closed intervals, firstList and secondList, where firstList[i] = [starti, endi] and secondList[j] = [startj, endj]. 
Each list of intervals is pairwise disjoint and in sorted order.

Return the intersection of these two interval lists.

A closed interval [a, b] (with a <= b) denotes the set of real numbers x with a <= x <= b.

The intersection of two closed intervals is a set of real numbers that are either empty or represented as a closed interval. 
For example, the intersection of [1, 3] and [2, 4] is [2, 3].

*/

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> res;
        for (auto i = 0, j = 0; i < A.size() && j < B.size(); A[i][1] < B[j][1] ? ++i : ++j) {
            auto start = max(A[i][0], B[j][0]);
            auto end = min(A[i][1], B[j][1]);
            if (start <= end) 
                res.push_back({start, end});
        }
        return res;    
    }
};
