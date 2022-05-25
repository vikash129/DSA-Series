#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
};
Node *newNode(int a)
{
    Node *node = new Node();
    node->data = a;
    node->left = node->right = NULL;

    return (node);
}

int height(Node *node);
void printCurrentNode(Node *node, int level);

// using function
void printLevelOrder(Node *root)
{
    int h = height(root);
    cout << "height : " << h << endl;
    for (int i = 1; i <= h; i++)
    {
        printCurrentNode(root, i);
    }
}


void printCurrentNode(Node *node, int level)
{

    if (node == NULL)
        return;

    if (level == 1)
    {
        cout << node->data << " ";
    }
    else
    {
        printCurrentNode(node->left, level - 1);
        printCurrentNode(node->right, level - 1);
    }
}
int height(Node *node)
{

    if (node == NULL)
        return 0;

    int lheight = height(node->left);
    int rheight = height(node->right);

    // cout << "data " << node->data <<endl;
    //   cout << "lheight : " << lheight << endl;
    //   cout << "rheight : " << rheight << endl<<endl;

    if (lheight > rheight)
    {
        return (lheight + 1);
    }
    else
    {
        return (rheight + 1);
    }
}

// using stack
//  void printLevelOrder(Node *root){

// queue<Node*> q ;
// Node * current = root ;

// while(!q.empty()){

//     q.push(current) ;
// current = q.front() ;
// q.pop() ;

// if(current->left) q.push(current->left) ;
// if(current->right) q.push(current->right) ;

// }
// };

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);

    return 0;
}