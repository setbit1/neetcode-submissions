class FreqStack {
    unordered_map<int, int> freqMap;
    unordered_map<int, stack<int>> setMap;
    int maxFreq = 0;
public:
    FreqStack() {
        unordered_map<int, int> freqMap;
        unordered_map<int, stack<int>> setMap;
    }
    
    void push(int val) {
        int freq = freqMap[val] + 1;
        freqMap[val] = freq;
        maxFreq = max(freq, maxFreq);
        
        setMap[freq].push(val);
    }
    
    int pop() {
        int top = setMap[maxFreq].top();
        setMap[maxFreq].pop();
        freqMap[top]--;

        if(setMap[maxFreq].size() == 0)
            maxFreq--;

        return top;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */