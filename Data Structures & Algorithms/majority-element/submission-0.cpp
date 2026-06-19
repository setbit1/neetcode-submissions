class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m_e=INT_MAX, count = 0;
        for(auto x : nums)
        {
            if(m_e == x)
                count++;
            else
            {
                count--;
                if(count <= 0)
                {
                    m_e = x;
                    count = 1;
                }
            }
        }
        return m_e;
    }
};