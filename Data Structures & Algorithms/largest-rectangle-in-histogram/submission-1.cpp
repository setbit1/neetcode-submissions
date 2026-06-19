class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> help;
        int n = heights.size();
        vector<int> left(n, -1);
        vector<int> right(n, n);
        int maxArea = 0;

        for(int i=0; i<n; i++)
        {
            while(!help.empty() && (heights[help.top()] >= heights[i]))
            {
                right[help.top()] = i;
                help.pop();
            }
            if(!help.empty())
                left[i] = help.top();
            help.push(i);
        }

        for(int i=0; i<n; i++)
            maxArea = max(maxArea, (right[i]-left[i]-1) * heights[i]);
        return maxArea;
    }
};
