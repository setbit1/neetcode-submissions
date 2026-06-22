class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int i = n-1, j=n-1;
        int count = 0, sum = 0;
        while(count < n)
        {
            sum += gas[j]-cost[j];
            count++;
            j = (j+1)%n;
            while(sum < 0 && count < n)
            {
                i--;
                sum += gas[i]-cost[i];
                count++;
            }
        }
        return sum < 0 ? -1 : i;
    }
};
