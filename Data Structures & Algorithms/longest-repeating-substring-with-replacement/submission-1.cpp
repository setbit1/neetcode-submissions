class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26]{};
        int l=0, mx = 0, n=s.length();
        for(int r=0; r<n; r++)
        {
            count[s[r]-'A']++;
            mx = max(mx, count[s[r]-'A']);
            if(r-l+1-mx > k)
            {
                count[s[l]-'A']--;
                l++;
            }
        }
        return n-l;
    }
};
