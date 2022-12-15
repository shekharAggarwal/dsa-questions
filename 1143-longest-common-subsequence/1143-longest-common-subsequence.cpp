class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(),m=text2.size();
        int x[n+1][m+1];
        for(int i=0;i<=n;i++)
            x[i][0] =0;
        for(int i=0;i<=m;i++)
            x[0][i] =0;
        
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(text1[i]==text2[j]){
                    x[i+1][j+1]=x[i][j]+1;
                }else{
                    x[i+1][j+1]=max(x[i+1][j],x[i][j+1]);
                }
            }
        
        return x[n][m];
    }
};