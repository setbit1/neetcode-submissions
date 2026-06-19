class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int index = 0;
        string ans = "";
        while(strs[0].length() > index)
        {
            for(int i=1; i<strs.size(); i++)
                if((strs[i].length() <= index) || (strs[i][index] != strs[i-1][index]))
                    return ans;
            ans += strs[0][index];
            index++;
        }
        return ans;
    }
};