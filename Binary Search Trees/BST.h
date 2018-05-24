#ifndef BST_h
#define BST_h

struct Node {
    long data;

    Node* left;
    Node* right;
};

void traverse(Node* root){
    if (root != NULL){
        traverse (root->left);

        std::cout << root->data << std::endl;

        traverse(root->right);

    }
}

Node* insert(Node* root, long value){
    if (root == NULL){
        root = new Node;
        root->data = value;
        root->left = NULL;
        root->right = NULL;
    }
    else{
        if (value <= root->data){
            root->left = insert(root->left, value);
        }
        else{
            root->right = insert(root->right, value);
        }
    }
    return root;
}

bool search (Node* root, long value){
    if (root == NULL){
        return false;
    }
    else{
        if (root->data == value){
            return true;
        }
        else if (value < root->data){
            return search(root->left, value);
        }
        else {
            return search(root->right, value);
        }
    }
}


#endif
