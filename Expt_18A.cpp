#include <iostream>

using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int capacity;

    public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    int enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return -1;
        }

        if(front == -1) {
            front = 0;
        }
        arr[++rear] = x;
        cout << x << " added to the queue" << endl;
        return 0;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1;
        }

        int x = arr[front++];
        cout << x << " removed from the queue" << endl;
        
        if(front > rear) {
            front = rear = -1;
        }
        return x;
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[rear];
    }

    int getSize() {
        if (isEmpty()) return 0;
        return (rear - front + 1);
    }

    ~Queue() {
        delete[] arr;
    }
};

int main(void) {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Size: " << q.getSize() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}
