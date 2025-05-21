// Tree Traversal
#include <iostream>
using namespace std;

// Define a node
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Preorder Traversal: Root → Left → Right
void preorder(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Inorder Traversal: Left → Root → Right
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Postorder Traversal: Left → Right → Root
void postorder(Node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    // Manually creating a simple binary tree:
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder: ";
    preorder(root);    // Output: 1 2 4 5 3
    cout << endl;

    cout << "Inorder: ";
    inorder(root);     // Output: 4 2 5 1 3
    cout << endl;

    cout << "Postorder: ";
    postorder(root);   // Output: 4 5 2 3 1
    cout << endl;

    return 0;
}
