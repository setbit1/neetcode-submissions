#include<cstring>
class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(string s : strs){
            int si = s.size();
            ans += string((const char*)&si, sizeof(si));
            ans += s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0, n = s.size();
        int si = 0;
        while( i< n)
        {
            memcpy(&si, s.data()+i, sizeof(si));
            i+= sizeof(si);
            ans.push_back(s.substr(i, si));
            i+=si;
        }
        return ans;
    }
};
//instead of size characters use size pointer and fixed 4byte of address and convert to string(const char*)
//to separate the strings.