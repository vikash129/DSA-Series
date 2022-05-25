// Pros: The linked list implementation of a stack can grow and shrink according to the needs at runtime. 
// Cons: Requires extra memory due to involvement of pointers.
#include <iostream>


using namespace std;
 #define MAX 10

 class StackNode{
     public:
        int data ;
        StackNode *next ;     
 };


class Stack{
    
    public:
  StackNode *root = NULL ;

    Stack() { }
    bool push(int x);
    int pop();
    int peek() { if(!isEmpty() ) return root->data ; }; //top
    bool isEmpty() {return !root ;};
};

bool Stack::push(int x)
{
       StackNode *node = new StackNode() ;
       node->data = x ;
       node->next = root ;
       root = node ;
        return true;
}

int Stack::pop()
{
    if (isEmpty()) {
        cout << "Stack Empty\n";
        return -1;
    }
    else {
        int popped = root->data ;
         StackNode *node = root ;
         root = root->next ;
         free(node) ;
        return popped;
    }
}




void print(Stack s){
     StackNode *head = s.root ; 
    while (head != NULL)
    {
        cout << head->data << " " ;
        head = head->next ;
    };
    
    cout << endl  ;  
}


int main(){

Stack s ;

s.push(23);
s.push(13);
s.push(34);

cout << s.peek() <<endl;
cout << s.pop() <<endl;
cout << s.pop() <<endl;
cout << s.pop() <<endl;
cout << s.pop() <<endl;



print(s);
return 0;
}