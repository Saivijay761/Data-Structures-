#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void inOrder(struct Node* root){
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d", root->data);
        inOrder(root->right);
    }
}

int main(){
    struct Node * root = newNode(11);
    root->left = newNode(12);
    root->right= newNode(13);
    root->left->left = newNode(14);
    root->left->right = newNode(15);
    root->right->right = newNode(9);
    root->left->left->left = newNode(16);
    root->left->left->right = newNode(17);

    printf("In order traversal");
    inOrder(root);
    return 0;
}
