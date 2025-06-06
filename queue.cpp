#include <iostream>
using namespace std;

class Queue {
private:
    int head, tail;
    int a[10];
    int size;

public:
    Queue(int s) {
        size = s;
        head = -1;
        tail = -1;
    }

    void enqueue(int value) {
        if (tail == size - 1) {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (head == -1) {
            head = 0;
        }
        a[++tail] = value;
        cout << "Pushed" << value << endl;
    }

    void dequeue() {
        if (head == -1 || head > tail) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Dequeued: " << a[head++] << endl;
    }

    void display() {
        if (head == -1 || head > tail) {
            cout << "Queue is Empty" << endl;
            return;
        }
        for (int i = head; i <= tail; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    bool is_Empty() {
        return (head == -1 || head > tail);
    }    
};

int main() {
    Queue q(3);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4); // Should show Overflow
    q.display();
    q.dequeue();
    q.display();
    if (q.is_Empty()) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue is not empty\n";
    }
    

    return 0;
}
