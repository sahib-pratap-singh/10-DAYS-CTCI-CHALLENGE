Solution for **8.3 MAGIC INDEX**
Approch 1
//Simple we can simple iterate and compare
//Time complexity: O(N)
Approach 2

//Binary search
Time complexity: O(Log(N))
Space complexity: 0(1)

`class Solution {
public:
    int search(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==mid){
                return mid;
            }
            if(nums[mid]<mid){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
};`