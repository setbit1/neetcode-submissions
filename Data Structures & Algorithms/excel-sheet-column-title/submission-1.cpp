class Solution {
public:
    string convertToTitle(int number) {
        string ans;
        while(number > 0)
        {
            if(number == 26)
            {
                ans = 'Z' + ans;
                number = 0;
            }
                
            else
            {
                char x = (number % 26 -1)+'A';
                ans = x+ans;
            }
            
            number /= 26;
        }
        return ans;
    }
};