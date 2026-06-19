class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> help;
        int ans = 0;
        for(auto s : operations)
        {
            if(s == "D")
                help.push(help.top()*2);
            else if(s == "C")
            {
                ans -= help.top();
                help.pop();
            }
            else if(s == "+")
            {
                int last = help.top();
                help.pop();
                int second_last = help.top();
                help.push(last);
                help.push(last+second_last);
            }
            else
                help.push(stoi(s));

            if(s != "C")
                ans += help.top();
        }
        return ans;
    }
};