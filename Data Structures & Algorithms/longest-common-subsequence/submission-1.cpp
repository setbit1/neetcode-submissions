class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length(), m = text2.length();
        vector<vector<int>> hash(n, vector<int> (m, 0));
        int left, up, leftUp;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                left = 0; up = 0; leftUp = 0;
                if(j > 0)
                    left = hash[i][j-1];
                if(i > 0)
                    up = hash[i-1][j];
                if(i > 0 && j> 0)
                    leftUp = hash[i-1][j-1];

                if(text1[i] == text2[j])
                    hash[i][j] = max(leftUp+1, max(left, up));
                else
                    hash[i][j] = max(left, up);
            }
        }
  
        return hash[n-1][m-1];
    }
};
