class Solution {
  public:
  
       // your code here
    int longestCommonSubstr(string& text1, string& text2) {
        int m=text1.size();
        int n=text2.size();
       int maxi=0;
       vector<vector<int>>dp(m+1,vector<int>(n+1,0));
       for(int i=1;i<=m;i++){
           for(int j=1;j<=n;j++){
               if(text1[i-1]==text2[j-1])
               dp[i][j]=1+dp[i-1][j-1];
               maxi=max(maxi,dp[i][j]);
           }
       }
       return maxi;
    }
};