#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node{
    public:
    int data;

    Node* left, *right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;

    }

};

int main(){
    int x;
    cout<<"enter the root node:"<<endl;
    cin>>x;
    queue<Node*> q;

    Node * root = new Node(x);

    q.push(root);
    
    while(!q.empty()){

      Node*temp = q.front();
      q.pop();

      int first;
      cout<<"enter the left node of "<< temp->data <<":"<<endl;
      cin>>first;

      if(first != -1){
        temp->left = new Node(first);
        q.push(temp->left);
      }

      int second;
      cout<<"enter the right node of "<<temp->data<<":"<<endl;

      cin>>second;

      if(second != -1){
        temp->right = new Node(second);
        q.push(temp->right);
      }

    }

}




output  

Enter the root node:
1
Enter the left node of 1 (-1 for NULL):
2
Enter the right node of 1 (-1 for NULL):
3
Enter the left node of 2 (-1 for NULL):
4
Enter the right node of 2 (-1 for NULL):
5
Enter the left node of 3 (-1 for NULL):
6
Enter the right node of 3 (-1 for NULL):
7
Enter the left node of 4 (-1 for NULL):
-1
Enter the right node of 4 (-1 for NULL):
-1
Enter the left node of 5 (-1 for NULL):
-1
Enter the right node of 5 (-1 for NULL):
-1
Enter the left node of 6 (-1 for NULL):
7
Enter the right node of 6 (-1 for NULL):
8
Enter the left node of 7 (-1 for NULL):
-1
Enter the right node of 7 (-1 for NULL):
-1
Enter the left node of 7 (-1 for NULL):
-1
Enter the right node of 7 (-1 for NULL):
-1
Enter the left node of 8 (-1 for NULL):
-1
Enter the right node of 8 (-1 for NULL):
-1
Level Order Traversal: 1 2 3 4 5 6 7 7 8