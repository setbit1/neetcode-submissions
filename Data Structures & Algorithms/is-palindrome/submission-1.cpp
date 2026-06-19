class Solution {
public:
    bool isPalindrome(string s) {
        string newS = "";

        for(auto c : s)
        {
            if(c > 'Z')
                c = c-'a'+'A';
            
            if((c <= 'Z' && c >= 'A') || ( c <= '9' && c>= '0'))
                newS+= c;
        }
                
        int i=0, j = newS.length()-1;
        while(i < j)
        {
            if(newS[i] != newS[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};
