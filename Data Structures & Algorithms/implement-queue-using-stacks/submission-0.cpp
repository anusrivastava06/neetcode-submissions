class MyQueue {
public: 
int arr[100];
int front;
int rear ;
    MyQueue() {
        front =0;
        rear=0;

    }
    
    void push(int x) {
        arr[rear]=x;
        rear ++;
    }
    
    int pop() {
        int ans = arr[front];
        front++;
        return ans;
        
    }
    
    int peek() { return arr[front];
        
    }
    
    bool empty() {
        return front == rear;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */