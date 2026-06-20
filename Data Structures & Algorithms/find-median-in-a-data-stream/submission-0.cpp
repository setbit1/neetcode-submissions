class MedianFinder {
        priority_queue<int> first;
        priority_queue<int, vector<int>, greater<int>> last;
public:
    MedianFinder() {

    }
    
    void addNum(int num) {
        first.push(num);
        last.push(first.top());
        first.pop();

        if(last.size() > first.size()+1){
            first.push(last.top());
            last.pop();
        }

    }
    
    double findMedian() {
        return first.size()==last.size() ? (first.top()+last.top())/2.0 : last.top();
    }
};
