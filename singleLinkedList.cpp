#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public:
        List(){
            head=tail=NULL;
        }
        void push_front(int val){
            Node* newNode=new Node(val);
            // Node newNode(val);
            
            if (head == NULL){
                head = tail = newNode;
                return;
            }else{
                newNode ->next = head;
                head=newNode;
            }

        }

        void display(){
            Node* temp = head;
            while(temp!=NULL){
                cout << temp->data << "\n";
                temp = temp->next;
            }
        }

};

int main() {
    List l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.display();

    return 0;
}