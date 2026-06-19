class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int ans = 0;
        unordered_map<char, int> toInt = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}};

        for(int i=0; i<n; i++)
        {
            if(i!=n-1 && toInt[s[i]] < toInt[s[i+1]])
            {
                ans += (toInt[s[i+1]] - toInt[s[i]]);
                i++;
            }
            else
                ans += toInt[s[i]];
            //cout << ans << endl;
        }

        return ans;
    }
};