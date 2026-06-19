class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> changer = {{5, 0}, {10, 0}};
        for(int i=0; i<bills.size(); i++)
        {
            int netReturn = bills[i]-5;
            if(netReturn == 0)
            {
                changer[5]++;
                continue;
            }
            if(netReturn == 5)
            {
                if(changer[5] >= 1)
                {
                    changer[5]--;
                    changer[10]++;
                }
                else
                    return false;
            }
            else if(netReturn == 15)
            {
                if(changer[10] >= 1 && changer[5] >= 1)
                {
                    changer[5]--;
                    changer[10]--;
                }
                else if(changer[5] >= 3)
                    changer[5] -= 3;
                else 
                    return false;
            }
        }
        return true;
    }
};