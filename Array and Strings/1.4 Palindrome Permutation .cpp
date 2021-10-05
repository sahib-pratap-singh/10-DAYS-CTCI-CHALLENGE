// My approach for** 1.4 Palindrome Permutation 1**
// There are many approach to solve this
// We can accept only one odd length char and any no of even length char.

// 1. Sorting
// 2.Hashmap
// 3.array

// Time complexity: O(n)
// Space complexity: 0(1)

//Using array

class Solution {
public:
    bool canPermutePalindrome(string s) {
        int count[26]={0};
        for(auto x:s){
            count[x-'a']++;
        }
        int noofsamechar=0;
        for(int i=0;i<26;i++){
            noofsamechar+=count[i]%2;
        }
        return noofsamechar<=1;
    }
};`