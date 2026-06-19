class KthLargest {
public:
    int index = 0;
    int k;
    priority_queue<int, vector<int>, greater<int>> q;
    KthLargest(int k, vector<int>& nums)
    {
        this->k = k;
        for(auto x : nums)
        {
            if(index < k)
            {
                q.push(x);
                index++;
            }
            else if(index >= k && x > q.top())
            {
                q.pop();
                q.push(x);
            }
            cout << q.top() << endl;
        }  
    }
    
    int add(int x) {
        if(index < k)
        {
            index++;
            q.push(x);
        }
        else if(index >= k && x > q.top())
        {
            q.pop();
            q.push(x);
        }
        
        cout << q.top() << endl;
        return q.top();
    }
};
