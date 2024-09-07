#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

// Recursive Solution
int solve(int i,int j,int m,int n)
{
    if(i==m-1 && j==n-1)return 1;
    if(i>=m || j>=n)return 0;

    int up = solve(i+1,j,m,n);
    int left = solve(i,j+1,m,n);
    return up+left;

}

// Memoization
int memoSolve(int i,int j,int m, int n, vector<vector<int>>&dp)
{
    if(i>=m || j>=n)return 0;
    if(i==m-1 && j==n-1)return 1;
    if(dp[i][j] != -1)
    return dp[i][j];

    int left = memoSolve(i+1,j,m,n,dp);
    int up = memoSolve(i,j+1,m,n,dp);
    return dp[i][j] = left+up;
}
int uniquePaths(int m, int n) 
    { 
        // return solve(0, 0, m, n); 

        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // return memoSolve(0,0,m,n,dp);

        // Tabulation
        vector<vector<int>>dp(m,vector<int>(n,1));

        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};