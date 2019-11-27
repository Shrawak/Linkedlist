#include<iostream>
using namespace std;
#include "list.h"


List::List()
{
    HEAD=NULL;
    TAIL=NULL;
}
List::~List()
{
}

bool List::isEmpty()
{
    return HEAD==NULL;

}
void List:: addToHead(int data)
{
    Node* new_node= new Node();
    new_node ->info=data;
    new_node ->next=HEAD;
    HEAD =new_node;
}
void List :: addToTail(int data )
{
   Node* new_node= new Node();
    new_node ->info=data;
    new_node ->next=NULL;
    TAIL-> next=new_node;
}
void List ::add(int data,Node* pred)
{
    Node* new_node= new Node();
    new_node ->info=data;
    new_node-> next =pred-> next;
    pred-> next =new_node;

}
void List :: removeFromHead()
{
    Node* nodeToDelete =HEAD;
    HEAD=nodeToDelete-> next;
    delete nodeToDelete;

}
void List ::traverse()
{
    Node* temp=HEAD;
    while(temp!=NULL){
        cout<<temp->info<<endl;
        temp=temp->next;
    }
}
int main()
{
    List l;
    cout<<l.isEmpty()<<endl;
    l.addToHead(5);
    l.addToHead(9);
    l.addToHead(7);
    l.addToHead(0);
    l.addToHead(2);
    l.traverse();
    l.removeFromHead();
    l.traverse();
}
