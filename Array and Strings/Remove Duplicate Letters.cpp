//Will use greddy approach
//While iterating i will check if element at i greater than i+1
//and i is duplicated then we can remove element i

//Time complexity: O(N)
//Space complexity: O(1) -> O(constant)

`class Solution {
public:
    string removeDuplicateLetters(string s) {
        //Will use stack to store output string
        stack<char> st;
        //to check is the element is seen earlier
        vector<int> seen(26,0);
        //Map to store the last occurence index
        unordered_map<char,int> last_index;
        for(int i=0;i<s.length();i++){
            last_index[s[i]]=i;
        }
        
        //Iterating 
        for(int i=0;i<s.length();i++){
            char cur=s[i];
            //if char is not seen before
            if(!seen[cur-'a']){
                //We will check if current element is 
                //less than element at top of stack
                //and repeating then remove that element
                while(!st.empty() and cur<st.top() and last_index[st.top()]>i){
                    seen[st.top()-'a']=0;
                    st.pop();
                }
                st.push(cur);
                seen[cur-'a']++;
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};`