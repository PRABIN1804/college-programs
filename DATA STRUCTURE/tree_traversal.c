#include<stdio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node*left;
    struct node*right;
};
//INORDER TRAVERSAL
void inordertraversal(struct node*root)
{
    if (root==NULL)return;
    inordertraversal(root->left);
    printf("%d->",root->item);
    inordertraversal(root->right);
}
//PREORDER TRAVERSAL
void preordertraversal(struct node*root)
{
    if(root==NULL)return;
    printf("%d->",root->item);
    preordertraversal(root->left);
    preordertraversal(root->right);
}
//POSTORDER TRAVERSAL
void postordertraversal(struct node*root)
{
    if(root==NULL)return;
    postordertraversal(root->right);
    postordertraversal(root->left);
    printf("%d->",root->item);
}
//CREATE A NEW NODE
struct node *createNode(int value)
{
    struct node* newNode = malloc(sizeof(struct node));
    newNode->item=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
//INSERT ON THE LEFT OF THE NODE
struct node* insertleft(struct node* root,int value)
{
root->left=createNode(value);
return root->left;
}
//INSERT ON THE RIGHT OF THE NODE
struct node* insertright(struct node* root,int value)
{
root->right=createNode(value);
return root->right;
}
int main()
{
    struct node* root = createNode(1);
    insertleft(root,12);
    insertright(root,9);
    insertleft(root->left,5);
    insertright(root->right,6);

    printf("inorder traversal \n");
    inordertraversal(root);

    printf("\npreorder traversal \n");
    preordertraversal(root);

    printf("\npostorder traversal \n");
    postordertraversal(root);
    return 0;
    }