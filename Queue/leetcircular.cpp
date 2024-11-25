class MyCircularQueue {
public:
    int maxSize;
    int size;
    int *arr;
    int front;
    int rear;

    MyCircularQueue(int k) {
        maxSize = k;
        arr = new int[k];
        front = 0; 
        rear = -1;
        size = 0;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        rear = (rear + 1) % maxSize; 
        arr[rear] = value;
        size++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        front = (front + 1) % maxSize;
        size--;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1; 
        }
        return arr[front];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == maxSize;
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