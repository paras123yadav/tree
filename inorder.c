#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left,*right;
};
struct node *create()
{
    int x;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter data :");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("enter the left child of %d",x);
    newnode->left=create();
    printf("enter the right child of %d",x);
    newnode->right=create();
    return newnode;
}
void inorder(struct node *root)
{
    if (root==0)
    {
        return;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void main()
{
    struct node *root;
    root=0;
    root=create();
    printf("\ninorder is:");
    inorder(root);
}