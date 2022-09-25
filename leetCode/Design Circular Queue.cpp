class MyCircularQueue {
public:
    vector<int>vec;
    int n, front = -1, rear = -1;
    
    MyCircularQueue(int k) {
        vec.resize(k);
        n = k;
    }
    
    bool enQueue(int value) {
        if((front == 0 and rear == n-1) || front == rear+1)
            return false;
        
        if(front == -1){
            front = 0;
            rear = 0;
        }else {
            if(rear == n-1) rear = 0;
            else rear++;
        }
        vec[rear] = value;
        return true;
    }
    
    bool deQueue() {
        
        if(front == -1) return false;
        if(front == rear){
            front = -1;
            rear = -1;
        }else{
            if(front == n-1) front = 0;
            else front++;
        }
        return true;
    }
    
    int Front() {
        if(front != -1) return vec[front];
        return -1;
    }
    
    int Rear() {
        if(rear != -1) return vec[rear];
        return -1;
    }
    
    bool isEmpty() {
        if(front == -1) return true;
        return false;
    }
    
    bool isFull() {
        if((front == 0 and rear == n-1) || front == rear+1) return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
