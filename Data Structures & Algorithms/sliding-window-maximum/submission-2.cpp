class cmp {
    public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if(a.first != b.first)
            return a.first < b.first;
        else
            return a.second > b.second;
    }
};

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>, vector<pair<int, int>>, cmp> help;

        int n = nums.size();

        for(int i=0; i<k; i++)
            help.push({nums[i], i});

        ans.push_back(help.top().first);    
        for(int i=k; i<n; i++)
        {
            if(help.top().first == nums[i-k])
                help.pop();
            help.push({nums[i], i});
            while(help.top().second < i-k)
                help.pop();
            ans.push_back(help.top().first);
        }

        return ans;
    }
};
