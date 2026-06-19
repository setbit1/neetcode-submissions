class Solution {
public:
    bool check(int i, int j, string& s)
    {
        while(i < j)
        {
            if(s[i] != s[j])
                return false;
            i++; j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int len = s.length();
        int i = 0, j = len -1;
        while(i < j)
        {
            if(s[i]!= s[j])
            {
                return check(i+1, j, s) or check(i, j-1, s);
            }
            i++; j--;
        }
        return true;
    }
};