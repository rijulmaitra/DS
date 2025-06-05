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

        void push_back(int val){
            Node* newNode=new Node(val);
            if (head==NULL){
                head=tail=newNode;
            }else{
                tail->next=newNode;
                tail=newNode;
            }
        }

        void pop_front(){
            if(head==NULL){
                cout<<"1st element is null" << endl;
                return;
            }else{
                Node* temp = head;
                head=head->next;
                temp->next=NULL;
                delete temp;
            }
        }

        void pop_back(){
            if(head==NULL){
                cout<<"Last element is null" << endl;
                return;
            }else{
                Node* temp = head;
                while (temp->next!=tail)
                {
                    
                    temp=temp->next;
                }
                temp->next=NULL;
                delete tail;
                tail=temp;
            }
        }

        void display(){
            Node* temp = head;
            while(temp!=NULL){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }

};

int main() {
    List l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_back(7);
    l.display();
    l.pop_front();
    l.display();
    l.pop_back();
    l.display();
    
    return 0;
}