class SpecialQueue {

  public:
    vector<int>q;
    int maxi = INT_MIN,mini = INT_MAX;
    void enqueue(int x) {
        // Insert element into the queue
        q.push_back(x);
        maxi = max(maxi,x);
        mini = min(mini,x);
    }

    void dequeue() {
        // Remove element from the queue
        q.erase(q.begin());
           
    }

    int getFront() {
        // Get front element
        return q[0];
    }

    int getMin() {
        // Get minimum element
        return *min_element(q.begin(),q.end());
    }

    int getMax() {
        // Get maximum element
        return *max_element(q.begin(),q.end());
    }
};