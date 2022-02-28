class MyCircularQueue {
public:
    int global;
    MyCircularQueue(int k) {
        global = k;
    }
    int queue[1001], head=0, tail=-1;
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        tail = (tail+1)%global;
        queue[tail] = value;
        //cout<<tail<<" ";
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
           return false;
        if(head == tail)
        {
            head = 0;
            tail = -1;
        }
        else
            head = (head+1)%global;
        //cout<<head<<" "<<tail<<" ";
        return true;
          
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        return queue[head];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return queue[tail];
    }
    
    bool isEmpty() {
        if(tail==-1)
            return true;
        return false;
    }
    
    bool isFull() {
        if((tail+1)%global == head && tail != -1)
            return true;
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
