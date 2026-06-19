class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a = word1.length(), b = word2.length();
        int i=0, j=0;
        string ans;

        while(i < a && j < b)
        {
            ans += word1[i];
            ans += word2[j];
            i++; j++;
        }

        while(i < a)
        {
            ans += word1[i];
            i++;
        }
        while(j < b)
        {
            ans += word2[j];
            j++;
        }
        return ans;
    }
};