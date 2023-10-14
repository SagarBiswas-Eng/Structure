#include <iostream>

using namespace std;

// Define the node structure
typedef struct Node {
    int data;
    Node* left;
    Node* right;
}* NodePointer;

// Create a new node
NodePointer newNode(int data) {
    NodePointer node = new Node;
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;
    return node;
}

// Insert a node
NodePointer insertNode(NodePointer root, int data) {
    if (root == NULL) {
        return newNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root -> right = insertNode(root->right, data);
    }
    return root;
}

// Traverse the tree in-order
void inOrderTraversal(NodePointer root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    NodePointer root = NULL;
    root = insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 7);
    insertNode(root, 1);
    insertNode(root, 9);
    cout << "In-order traversal of binary tree: ";
    inOrderTraversal(root);
    return 0;
}
