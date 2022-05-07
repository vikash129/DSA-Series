/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Node
{
public:
  int data;
  Node *next = NULL;
};

class LinkedList
{
public:
  Node * root = NULL;

  LinkedList (Node * head)
  {
    root = head;
  };
  void display ();
  int deleteAtIndex (int index);
  int deleteData (int data);
 void deleteData2(Node *head , int data) ;
 

};

void LinkedList::display ()
{
  Node *temp = root;

  while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
}

// int LinkedList::deleteData (int data)
// {
//   Node *temp = root;

//   if (temp->data == data)
//     {
//       root = temp->next;
//       delete temp;
//       return 1;
//     };

//   while (temp->next != NULL && temp->next->data != data)
//     {
//       temp = temp->next;
//     };
    
//     if(temp == NULL)return 0 ;

// Node *node = temp->next ;
//   temp->next = temp -> next->next;
//   delete node;

//   return 1;
// }

//recursive method


// void LinkedList::deleteData2 (Node *head , int data)
// {
//     if(head == NULL)  {cout << " element  not present in list\n" ;  return ;  } 

//  if (head->data == data)
//     {
//         Node *temp = head ;

//       head = head->next;
      
//       delete temp;
//       return ;
//     };
    
    
// deleteData2(head->next , data) ;
// }



int LinkedList::deleteAtIndex ( int pos)
{
    Node *temp = root ;
    if(pos == 0)  {

      root = root->next;
      delete temp;
      return 1 ; 
    } 

 else
    {
        for(int i = 0 ; i < pos - 1 ; i++){
            temp = temp->next ;
        }
        Node *node = temp->next ;
        temp->next = node->next ;
      
      delete node;
      return 1;
    };
    
    }
int main ()
{
  Node *head = new Node ();
  Node *first = new Node ();
  Node *second = new Node ();
  Node *third = new Node ();

  head->data = 3;
  first->data = 565;
  second->data = 7;
  third->data = 23;

  head->next = first;
  first->next = second;
  second->next = third;
  third->next = NULL;

  LinkedList list(head);
  //list.deleteData(23);
  //list.deleteData2(head  , 3);
  
  list.deleteAtIndex(1);
  list.display ();
  return 0;
}
