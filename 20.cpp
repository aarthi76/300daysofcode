/* 

You are given a string s of lowercase English letters and an integer array shifts of the same length.

Call the shift() of a letter, the next letter in the alphabet, (wrapping around so that 'z' becomes 'a').

For example, shift('a') = 'b', shift('t') = 'u', and shift('z') = 'a'.
Now for each shifts[i] = x, we want to shift the first i + 1 letters of s, x times.

Return the final string after all such shifts to s are applied.

*/

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long shift=0;
        for(int i=s.size()-1;i>=0;i--){
            s[i]=((s[i]-'a')+(shift+shifts[i]) % 26) % 26 +'a';
            shift+=shifts[i];
        }
        return s;
    }
};
