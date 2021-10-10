Solution for **8.2 ROBOT IN A GRID**

//Dynamic programming

//Time complexity: O(rows* cols)
//Space compleity: O(1)

//There is only one way to move in first row and column
//but if there is obtacle then we cannot move further because only moving
//in right and bottom direction
//for the middle if there is no obtacle then its value is sum of previous row and column.

`class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]==1){
            return 0;
        }
        int rows=obstacleGrid.size();
        int cols=obstacleGrid[0].size();
        obstacleGrid[0][0]=1;
        //Clculating first row
        for(int i=1;i<cols;i++){
            obstacleGrid[0][i]=(obstacleGrid[0][i]==0 && obstacleGrid[0][i-1]==1)?1:0;
        }
        //Calculating first column
        for(int i=1;i<rows;i++){
            obstacleGrid[i][0]=(obstacleGrid[i][0]==0 && obstacleGrid[i-1][0]==1)?1:0;
        }
        
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(obstacleGrid[i][j]==1){
                    obstacleGrid[i][j]=0;
                }
                else{
                    obstacleGrid[i][j]=obstacleGrid[i-1][j]+obstacleGrid[i][j-1];
                }
            }
        }
        return obstacleGrid[rows-1][cols-1];
    }
};`