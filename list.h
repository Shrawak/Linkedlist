#ifndef list_h
#define list_h

#include <iostream>
using namespace std;

class Node
{
    public:
    int info;
    Node *next;
    
};

class List
{
    private:
        Node *HEAD;
        Node *TAIL;
    public:
        List();
        ~List();
        bool isEmpty();
        void addToHead(int data);
        void addToTail(int data);
        void add(int data,Node* pred);
        void  removeFromHead();
        void traverse();
    
};
#endif
