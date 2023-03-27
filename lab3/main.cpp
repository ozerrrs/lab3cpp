#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int x , Node *n){
        data = x ;
        next = n;
    }
};
class process{
public:
    Node *h = nullptr;
    Node *p = nullptr;
    int size;


    void enqueue(int input){
        Node *node= new Node (input, nullptr);
        if ( h== nullptr){
            h=p=node;
            size++;
        }else{
            node->next = h;
            h = node;
            size++;
        }
    }
    void dequeue(){
        if(h== nullptr){
            cout<<"There is not deleted value in list"<<endl;
        }else{
            for(p=h;p->next->next!= nullptr;p=p->next);
            delete p->next ;
            p->next = nullptr;
            size--;
        }
    }

    void print() {
        for (p = h; p != nullptr; p = p->next) {
            cout << p->data << " ";
        }
    }
    int Size(){
        return size;
    }
    bool isEmpty(){
        if(h== nullptr){
            return true;

        }
        return false;
    }
    int top(){
        return h->data;
    }




};

int main() {
    process *p = new process();
    cout<< p->isEmpty()<<endl;
    p->enqueue(1);
    p->enqueue(2);
    p->enqueue(3);
    p->enqueue(4);
    p->enqueue(5);
    p->enqueue(6);

    p->print();
    p->dequeue();
    cout<<" "<<endl;
    p->print();
    cout<<" "<<endl;
    cout<<p->Size()<<endl;
    cout<<p->top()<< endl;
    cout<< p->isEmpty()<<endl;





}







