class Solution {
public:
    int sumOfSquare(int n)
    {
        int ans = 0;
        while(n > 0)
        {
            ans += (n%10)*(n%10);
            n/= 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int> visited;
        while(n != 1)
        {
            if(visited.find(n) != visited.end())
                return false;
            visited.insert(n);
            n = sumOfSquare(n);
        }
        return true;
    }
};
