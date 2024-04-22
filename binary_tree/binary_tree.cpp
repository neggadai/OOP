#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;    

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

struct binaryTree {
    private:
        Node* root;
    public:
        binaryTree() : root(nullptr) {}

        void insert(int val) {
            root = insertRecursive(root, val);
        }

        Node* insertRecursive(Node* node, int val) {
            if (node == nullptr) {
                return new Node(val);
            }

            if (val < node->data) {
                node->left = insertRecursive(node->left, val);
            }
            else {
                node->right = insertRecursive(node->right, val);
            }

            return node;
        }
};
