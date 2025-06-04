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
            Node newNode(val);

        }

};

int main() {
    List l;
    
    return 0;
}