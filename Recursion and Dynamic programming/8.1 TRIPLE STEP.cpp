Solution for **8.1 TRIPLE STEP**

//Brute force 
//Recursion

//Time complexity: 3^n
//Space complexity O(N)

`class Solution {
public:
    int climb(int i, int n){
        if(i>n){
            return 0;
        }
        if(i==n){
            return 1;
        }
        return climb(i+1,n)+climb(i+2,n)+climb(i+3,n);
    } 
    int climbStairs(int n) {
        return climb(0,n);
    }
};`

2nd approach
//Memorization

//Time complexity: 3^n
//Space complexity O(N)

`class Solution {
public:
    int climb(int i, int n,int dp[]){
        if(i>n){
            return 0;
        }
        if(i==n){
            return 1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return climb(i+1,n,dp)+climb(i+2,n,dp)+climb(i+3,n,dp);
    } 
    int climbStairs(int n) {
        int dp[n];
        memset(dp,-1,sizeof(dp));
        return climb(0,n,dp);
    }
};`

3rd approach

//Dynamic Programming

//Time complexity: O(N)
//Space complexity O(N)

`class Solution {
public:
    int climbStairs(int n) {
        if(n==1){}
        int dp[n+1];
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
        for(int i=4;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};`