class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int ans = 0;
        pair<int, int> an = {0, 0};
        for(int i=0; i<n; i++)
        {
            int l=i, r=i;
            while(l>=0 && r<n)
            {
                if(s[l] == s[r])
                {
                    if(ans < r-l+1)
                    {
                        ans = r-l+1;
                        an = {l, r-l+1};
                    }
                }   
                else 
                    break;
                l--; r++;
            }

            l=i, r=i+1;
            while(l>=0 && r<n)
            {
                if(s[l] == s[r])
                {
                    if(ans < r-l+1)
                    {
                        ans = r-l+1;
                        an = {l, r-l+1};
                    }
                }   
                else 
                    break;
                l--; r++;
            }
        }
        return s.substr(an.first, an.second);
    }
};
