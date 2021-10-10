Solution for** 8.4 POWER SET**

//Aproach 1
//Cascading 
//Time complexity: O(n*2^n)
//Space complexity: 0(N*2^n)

`class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        output.push_back({});
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            int n=output.size();
            for(int i=0;i<n;i++){
                vector<int> newset=output[i];
                newset.push_back(val);
                output.push_back(newset);
            }
        }
        return output;
    }
};`

//Approach 2  100% faster
// time complexity: O(N * 2^N)
//space complexity: O(N)

`class Solution {
public:
    void createsubset(int start, int n, vector<int> &nums, vector<vector<int>> &result,vector<int> &subset){
        result.push_back(subset);
        for(int i=start;i<n;i++){
            subset.push_back(nums[i]);
            createsubset(i+1,n,nums,result,subset);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> result;
        vector<int> subset;
        createsubset(0,n,nums,result,subset);
        return result;
    }
};`