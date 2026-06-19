class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> ha(26, 0);
        vector<int> hb(26, 0);
        for(auto c : s1)
            ha[c-'a']++;
        int k = s1.length();
        int i=0, n=s2.length();
        for(int j=0; j<n; j++)
        {
            hb[s2[j]-'a']++;

            if(j-i > k-1)
                --hb[s2[i++]-'a'];
            if(ha == hb)
                return true;
        }
        return false;
    }
};
