#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int val;
    struct node *left,*right;
}node;

node *create()
{
    node *newnode;
    int data;
    newnode = (node *)malloc(sizeof(node));
    printf("enter the data (-1 for ending)");
    scanf("%d",&data);
    if(data==-1)
    {
        return 0;
    }
    else{
        newnode->data=data;
        printf("\n enter the left child of %d\n",data);
        newnode->left=create();
        printf("\n enter the right child of %d\n",data);
        newnode->right=create();
        return newnode;

    }
}
void preorder(node *root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }

}

void main()
{
    node *root=create();
    printf("\nthe tree traversed in preorder is \n");
    preorder(root);
}