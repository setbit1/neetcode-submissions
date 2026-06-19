class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> nge(n, 0);
        vector<int> npe(n, 0);

        int curr = 0, trapped_water = 0;
        for(int i=0; i<n; i++)
        {
            curr = max(curr, height[i]);
            nge[i] = curr;
        }
                 
        
        curr = 0;
        for(int i=n-1; i>=0; i--)
        {
            curr = max(curr, height[i]);
            npe[i] = curr;
        }
                
        for(int i=1; i<n-1; i++)
            trapped_water += (min(nge[i], npe[i])-height[i]);
        
        return trapped_water;
    }
};
