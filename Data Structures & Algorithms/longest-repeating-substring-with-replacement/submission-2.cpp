class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26]{};
        int l=0, mx = 0, n=s.length();
        for(int r=0; r<n; r++)
        {
            mx = max(mx, ++count[s[r]-'A']);
            if(r-l+1-mx > k)
                count[s[l++]-'A']--;
        }
        return n-l;
    }
};
