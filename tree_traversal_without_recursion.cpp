#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

    Node (int data)
  {
    this->data = data;
    left = right = NULL;
  }
};


//left - root -right
void
inOrder (Node * root)
{
  stack < Node * >s ;
  Node *current = root;
  // cout << current->data <<endl ;

  while (current != NULL || s.empty() == false)  // when current == false and s = [ ] it will false
    {
        
      while (current != NULL)
	{
	  s.push (current);
	  current = current->left;
	}
	
	current = s.top() ;
	s.pop();
    cout << "result : " <<  current->data << endl;
      
       current = current->right;
    }

//   while (!s.empty()){
//       cout << (s.top())->data << endl ;
//       s.pop();
//   }

  //   cout << typeid(s.name() << endl ; //St5stackIiSt5dequeIiSaIiEEE


}



int
main ()
{
  Node *root = new Node (1);
  root->left = new Node (2);
  root->right = new Node (3);
  root->left->left = new Node (4);
  root->left->right = new Node (5);

  inOrder (root);

  return 0;
}

/*
           1 
    2             3 
4      5
[   ( (4) 2 (5) ) ) 1  (3)]
*/
