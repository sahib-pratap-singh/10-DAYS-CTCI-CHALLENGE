// Approaches for  **1.6 STRING COMPRESSION**
// 1.Using hashmap
// 2.Linear iteration
//Time complexity: O(n)
//Space complexity: O(1)

class Solution {
public:
    int compress(vector<char>& chars) {
        int index=1;
        int n=chars.size();
        int count=1;
        for(int i=1;i<n;i++){
            char cur=chars[i];
            char prev=chars[i-1];
            
            if(cur==prev){
                count++;
            }
            else{
                if(count>1){
                    string s=to_string(count);
                    for(auto x:s){
                        chars[index++]=x;
                    }
                    count=1;
                }
                chars[index++]=cur;
            }
        }
        if(count>1){
            string s=to_string(count);
            for(auto x:s){
                chars[index++]=x;
            }
        }
        return index;
    }
};`