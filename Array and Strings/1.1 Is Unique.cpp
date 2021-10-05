// 1st approach using hashmap
// time complexity : O(n)
// space complexity :O(n)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //using hash map
        unordered_map<int,int> count;
        //output vector
        vector<int> output;
        for(auto x:nums){
            //adding count of integers in map(count)
            count[x]++;
            //if count of integer is greater than 1
            //add in output
            if(count[x]>1){
                output.push_back(x);
            }
        }
        return output;
    }
};


//second approach sorting the array
// time complexity: O(nlog(n))
// space complexity: O(1)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //output vector
        vector<int> output;
        //sort the vector
        sort(nums.begin(),nums.end());
        
        int i;
        //counting the elements 
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                output.push_back(nums[i]);
            }

        }
        
        return output;
    }
};

// 3rd and the best approach 
// traverse and negate if you find posistive
// that element is repeated
// it will not work for 0 .... n

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //output vector
        vector<int> output;
        for(int i=0;i<nums.size();i++){
            // if the element is already neagatie
            //means it is visited
            if(nums[abs(nums[i])-1]<0){
                output.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1]*=-1;
            
        }
        return v;
    }
};