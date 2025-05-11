#include <iostream>
using namespace std;
class Stack{
    private:
        int top;
        int a[10];
        int value;
    public:
        Stack(){
            top = -1;
        }
        void input(){
            cout << "Enter element: " ;
            cin >> value;
        }
        void push(){
            if (top >= 9){
                cout << "Stack overflow! \n";
                return; 
            }
            a[++top] = value;
            cout<< "Pushed " << value << " into Stack. \n"; 
        }
        void display(){
            if (top == -1){
                cout << "Stack is empty \n";
                return; 
            }
        }

};
int main(){
    Stack s;
    for (int i=0; i<=10; i++){
        s.input();
        s.push();
        s.display();
        
    }
    return 0;    
}