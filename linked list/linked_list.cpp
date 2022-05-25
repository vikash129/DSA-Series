// Pros: The linked list implementation of a stack can grow and shrink according to the needs at runtime. 
// Cons: Requires extra memory due to involvement of pointers.


#include <iostream>
 
using namespace std;
 
 class Node{
     public:
        int data ;
        Node *next ;     
 };


 class LinkedList{
     public:
      Node* root ;

     LinkedList(Node *head) {root = head ;} ;
     void display();
     void back_push(int data);
     void front_push(int data);
 };

 void LinkedList :: display(){

    while (root != NULL)
    {
        cout << root->data << " " ;
        root = root->next ;
    }
    cout << endl ;
    
 }


 void LinkedList :: back_push(int data){

Node *node = new Node() ; 
Node *temp = root ;

     while (temp->next != NULL)
     {
         temp = temp->next ;
     }

     node->data = data  ;
     node->next  = NULL ;

temp->next = node ; 

 };

 void LinkedList :: front_push(int data){

Node *node = new Node() ; 

     node->data = data  ;
     node->next  = root ;

root = node ;

 };

int main(){


 Node *head = new Node() ;
 Node *first = new Node() ;
 Node *second =new Node() ;

head->data = 4 ;
first->data = 2 ;
second->data = 14 ;

head->next = first ;
first->next = second ;
second->next = NULL ;

 LinkedList list(head) ;
list.back_push(34);
list.front_push(3344);

list.display();

 
return 0;
}