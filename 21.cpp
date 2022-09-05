/* 

Given an integer array A, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.

*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
         for (int i = 0, j = 0; j < A.size(); j++)
            if (A[j] % 2 == 0) swap(A[i++], A[j]);
        return A;
    }
};
