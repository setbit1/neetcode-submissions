class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int count = 0;
        int n = position.size();
    
        
        vector<int> time(n);
        iota(time.begin(), time.end(), 0);
        sort(time.begin(), time.end(), [&](int i, int j)
        {
            return position[i] > position[j];
        });

        double pre = 0;
        for(auto i : time)
        {
            double t = 1.0*(target-position[i])/speed[i];
            if(t > pre)
            {
                count++;
                pre = t;
            }
        }
        return count;
    }
};
