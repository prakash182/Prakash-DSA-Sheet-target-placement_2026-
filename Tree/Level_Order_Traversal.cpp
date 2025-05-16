#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node {
public:
    int data;
    Node* left, *right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Function to perform Level Order Traversal
vector<int> LevelOrderTraversal(Node* root) {
    vector<int> ans;

    if (root == NULL)
        return ans;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        ans.push_back(temp->data);

        if (temp->left != NULL)
            q.push(temp->left);

        if (temp->right != NULL)
            q.push(temp->right);
    }

    return ans;
}

int main() {

  // create the tree using level traversal 
    int x;
    cout << "Enter the root node:" << endl;
    cin >> x;

    if (x == -1) {
        cout << "Tree is empty." << endl;
        return 0;
    }

    Node* root = new Node(x);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        int first;
        cout << "Enter the left node of " << temp->data << " (-1 for NULL):" << endl;
        cin >> first;

        if (first != -1) {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        int second;
        cout << "Enter the right node of " << temp->data << " (-1 for NULL):" << endl;
        cin >> second;

        if (second != -1) {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    // Call Level Order Traversal and print the result
    vector<int> result = LevelOrderTraversal(root);
    cout << "Level Order Traversal: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}
