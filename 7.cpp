/*

Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper, return compute the researcher's h-index.

According to the definition of h-index on Wikipedia: A scientist has an index h if h of their n papers have at least h citations each, 
and the other n − h papers have no more than h citations each.

If there are several possible values for h, the maximum one is taken as the h-index.

*/

class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.empty())
            return 0;
        int n = citations.size();
        vector<int> hash(n + 1, 0);
        for(int i = 0; i < n; ++i){
            if(citations[i] >= n)
                hash[n]++;
            else
                hash[citations[i]]++;
        }
        int paper = 0;
        for(int i = n; i >= 0; --i){
            paper += hash[i];
            if(paper >= i)
                return i;
        }
        return 1;
    }
};
