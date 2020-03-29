1 st program to print preorder, inorder, postorder transversal on Binary tree

program :- 
 
 #include<stdio.h>
 #include<stdlib.h>
 struct node
{
 int data;
 struct node*left;
 struct node*right;
};
struct node*newNode(int data)
{
 struct node*node = (struct node*)malloc(size of(struct node));
 node->data = data;
 node->left = NULL;
 node->right = NULL;
 return(node);
}
void printPostorder(struct node*node)\
{
 if(node == NULL)
 return;
 printPostorder(node->left);
 printPostorder(node->right);
 printf("%d",node->data);
}
void printInorder(structnode*node)
{
 if(node == NULL)
 return;
 printInorder(node->left);
 printInorder(node->right);
 printf("%d",node->data);
}
void printPreorder(structnode*node)
{
 if(node == NULL)
 return;
 printf("%d",node->data);
 printPreorder(node->left);
 printPreorder(node->right);
}
voidmain()
{ 
 struct node*root = newNode(1);
 root->left = newNode(2);
 root->right = newNode(3);
 root->left->left = newNode(4);
 root->right->right = newNode(5);
 printf("\nPREORDER TRANSVERSAL OF BINARY TREE IS:\n);
 printPreorder(root);
 printf("\nINORDER TRANSVERSAL OF BINARY TREE IS:\n);
 printInorder(root);
 printf("\nPOSTORDER TRASVERSAL OF BINARY TREE IS:\n);
 printPostorder(root);
}