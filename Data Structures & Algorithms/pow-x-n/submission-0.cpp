class Solution {
public:
    double premiumPower(double x, int n)
    {
        if(x == 0)
            return 0;
        if(n == 0)
            return 1;
        if(n == 1)
            return x;
        return premiumPower(x, n/2)*premiumPower(x, (n-n/2));
    }
    double myPow(double x, int n) {
        int flag = ((n%2) && (x<0)) ? -1 : 1;
        x *= flag;
        if(n >= 0) 
            return flag*premiumPower(x, n);
        return 1/(flag*premiumPower(x, abs(n)));
    }
};
