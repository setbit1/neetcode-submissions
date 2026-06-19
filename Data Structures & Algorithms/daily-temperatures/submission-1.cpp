class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<int> record;
        vector<int> ans(n, 0);
        for(int i=0; i<n; i++)
        {
            while(!record.empty() && temp[record.top()] < temp[i])
            {
                int x = record.top();
                ans[x] = i-x;
                record.pop();
            }
            if(record.empty() || temp[record.top()] >= temp[i])
                record.push(i);
        }
        return ans;
    }
};
