//Pros: Easy to implement. Memory is saved as pointers are not involved. 
//Cons: It is not dynamic. It doesn’t grow and shrink depending on needs at runtime.

#include <iostream>


using namespace std;
 #define MAX 10

class Stack{
    int top ;
    public:
    int size  = 0 ; 
    int a[MAX]; // Maximum size of Stack
 
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek() { if(!isEmpty()) return a[top] ;}; //top
    bool isEmpty();
      bool isOverflow();
};

bool Stack::push(int x)
{
    if (isOverflow()) {
        cout << "Stack Overflow\n";
        return false;
    }
    else {
        a[++top] = x;
        size++ ;
        return true;
    }
}

int Stack::pop()
{
    if (isEmpty()) {
        cout << "Stack Empty\n";
        return -1;
    }
    else {
        size-- ;
        return a[top--];
    }
}


bool Stack::isOverflow()
{
    if (top == MAX-1)    return true;
    
        return false;
}
bool Stack::isEmpty()
{
    if (top < 0)    return true;
    
        return false;
}

void print(Stack s){
    for(int i = 0 ; i < s.size ; i++)cout << s.a[i] << " " ;
    cout << endl ;  
}


int main(){
 Stack s ;

 s.push(34) ; 
 s.push(35) ; 
 s.push(3) ;
s.pop();
s.pop();
s.pop();
 print(s); 

return 0;
}