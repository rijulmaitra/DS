#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int a[10];
    int value;

public:
    Stack() {
        top = -1;
    }

    void input() {
        cout << "Enter element: ";
        cin >> value;
    }

    void push() {
        if (top >= 9) {
            cout << "Stack overflow!\n";
            return;
        }
        a[++top] = value;
        cout << "Pushed " << value << " into Stack.\n";
    }

    void pop(){
        if (top == -1){
            cout << "Stack is empty\n";
            return;
        }else{
            cout << "Popped: " << a[top] << endl;
            top--;  
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    bool isFull() {
        return top >= 9;
    }
};

int main() {
    Stack s;
    for (int i = 0; i < 13; i++) {
        s.input();
        s.push();
        s.display();
        if (s.isFull()) {
            s.pop();
            break;
        }
    }
    s.display();
    s.pop();
    s.display();
    return 0;
}
