
#include <iostream>

using namespace std;


class Node{
    public:
    Node(int a) {data = a ;};  
        int data  ;
        Node *left = NULL;
        Node *right = NULL;
};

//InOrder => lef-root-right
int InOrderTraversal(Node *root){
    
    if(root==NULL)  return 69;

    
     cout <<"before left : " << root->data << endl ;
  cout <<  InOrderTraversal(root->left ) << endl;
    
    cout << "actual node " << root->data << endl ;
     
  cout <<  InOrderTraversal(root->right ) << endl;
    cout <<"after right : " <<  root->data << endl ;
    
    return 96;
};

//PreOrder => root-left-right
int PreOrderTraversal(Node *root){
    
    if(root==NULL)  return 11111;
    
    cout << "actual node => " << root->data << endl; // 1  , 2 , 4 , 5  , 3
    
   cout <<  PreOrderTraversal(root->left)  << endl ; //1111 ,9999  , 1111 , 9999 , 1111
   cout <<  PreOrderTraversal(root->right)  << endl ; // 1111 , 1111 , 9999 , 1111 , 9999
 
    return 9999 ;
    
    }

//PostOrder => left-right-root
int PostOrderTraversal(Node *root){
    
    if(root==NULL)  return -1;
    
   cout <<  PostOrderTraversal(root->left)  << endl ;   //-1 -9 -1 -9 -1
   cout <<  PostOrderTraversal(root->right)  << endl ;  //-1  -1 -9 -1 -9
   
    cout << "actual node => " << root->data << endl; //4 , 5 , 2 , 3 
 
    return -9 ;
    
    }
    
    
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    
    root->right = new Node(3);
    
     root->left->left = new Node(4);
     root->left->right = new Node(5);
     
    //  InOrderTraversal(root);
    // PreOrderTraversal(root);
    PostOrderTraversal(root);
     
   
    return 0;
}

/* 
        1 
    2           3 
4       5    

*/
