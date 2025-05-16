#include<iostream>
#include<queue>

using namespace std;

class Node{
  public:
  int data;
  Node* right, *left;

  Node(int value){
    data = value;
    right = left = NULL;
  }
};

Node* BinaryTree(){
  int x;
 
  cin>>x;

  if(x == -1) return NULL;

  Node* temp  = new Node(x);
  cout<<"Enter the left value of node "<<temp->data<<" :"<<endl;
  temp->left = BinaryTree();
  cout<<"Enter the right value of node "<<temp->data<<" :"<<endl;
  temp->right = BinaryTree();

  return temp;
  
}

int main(){
  cout<<"enter the root element: ";

  Node* root;
  root = BinaryTree();

  return 0;
}


// output 
 //  1 2 3 4 -1 -1 -1 -1 5 6 -1 -1 7 -1 -1
/*  
                                    1
                                  /    \
                                2        5
                              /         /   \
                            3          6      7
                          /
                        4 
                        */