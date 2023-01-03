#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
void post(struct node* node)
{
	if (node == NULL)
		return;

	post(node->left);
	post(node->right);
	printf("%d ", node->data);
}
void inorder(struct node* node)
{
	if (node == NULL)
		return;
	inorder(node->left);
	printf("%d ", node->data);
	inorder(node->right);
}
void pre(struct node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	pre(node->left);
	pre(node->right);
}
int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	printf("\nPreorder traversal of binary tree is \n");
	pre(root);

	printf("\nInorder traversal of binary tree is \n");
	inorder(root);

	printf("\nPostorder traversal of binary tree is \n");
	post(root);

	getchar();
	return 0;
}
