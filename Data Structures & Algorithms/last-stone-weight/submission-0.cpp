class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(auto x : stones)
            q.push(x);
        
        while(q.size() >= 2)
        {
            int a = q.top();
            q.pop();
            int b =q.top();
            q.pop();
            if(a != b)
                q.push(abs(a-b));
        }

        if(q.empty())
            return 0;
        return q.top();
    }
};
