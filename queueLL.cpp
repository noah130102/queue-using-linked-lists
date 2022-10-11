#include <iostream>


using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;

    }
};
class Queue{
    private:
    Node* front;
    Node* back;

    public:
    Queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        Node* p = new Node(x);
        
        if (front == NULL)
        {
            back = p;
            front=p;
            return;
        }
        back->next=p;
        back = p;
    }


    void pop(){
        if (front == NULL)
        {
            cout<< "Overflow"<<endl;
            return;
        }
        Node* toDel = front;
        front= front -> next;
        delete toDel;
        
    }

    int peek(){
        if (front == NULL)
        {
            cout<< "No Elements"<<endl;
            return -1;
        }
        return front->data;

    }
    bool empty(){
        if (front == NULL)
        {
            cout<< "No Elements"<<endl;
            return true;
        }
        return false;
    }
};