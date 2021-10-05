
// There are so many approaches to solve this problem
// 1. Sorting both the strings
// 2.Using hashmap
// 3. Using 2 array of size(26)
// 4.Sliding window

//Using two vectors of size 26

`class Solution {
public:
    bool isequal(int *a, int *b){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int a[26]={0};
        for(auto x:s1){
            a[x-'a']++;
        }
        int n=s1.length();
        if(n>s2.length()){
            return false;
        }
        for(int i=0;i<s2.length()-n+1;i++){
            int b[26]={0};
            for(int j=i;j<i+n;j++){
                b[s2[j]-'a']++;
            }
            if(isequal(a,b)){
                return true;
            }
        }
        return false;
    }
};`

//Sliding Window 100% faster

`class Solution {
public:
    bool isequal(int *a, int *b){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        int a[26]={0};
        int b[26]={0};
        int n=s1.length();
        for(int i=0;i<n;i++){
            a[s1[i]-'a']++;
            b[s2[i]-'a']++;
        }
        for(int i=0;i<s2.length()-n;i++){
            if(isequal(a,b)){
                return true;
            }
            b[s2[i+n]-'a']++;
            b[s2[i]-'a']--;
        }
        if(isequal(a,b)){
            return true;
        }
        return false;
    }
};`