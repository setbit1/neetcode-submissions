class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        for(; x; x/=10)
        {
            if(ans < INT_MIN/10 || ans > INT_MAX/10)
                return 0;
            ans = ans*10 + x%10;
        }
        return ans;
    }
};

//
//while(x/=10) : it will have x divided by 10 on first iteration
//but for(;x;x/=10) : will have x divided by 10 from next iteration.