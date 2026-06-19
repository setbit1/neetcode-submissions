class Solution {
   public:
    string minWindow(string s, string t) {
        vector<int> req(128, 0);
        vector<int> cur(128, 0);

        for (auto c : t) req[(int)c]++;

        int m = t.size(), n = s.size();
        int k = -1, mi = n + 1, cnt = 0;

        for (int l = 0, r = 0; r < n; r++) {
            char c = s[r];
            if (++cur[c] <= req[c]) cnt++;

            while (cnt == m) {
                if (r - l + 1 < mi) {
                    mi = r - l + 1;
                    k = l;
                }

                c = s[l++];
                if (cur[c]-- <= req[c]) --cnt;
            }
        }
        return k < 0 ? "" : s.substr(k, mi);
    }
};