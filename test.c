#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

#include"Queue.h"

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType val;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BulidTree(char* str, BTNode* root, int* i)
{
    if (str[*i] == '#')
    {
        (*i)++;
        return NULL;
    }
    root = (BTNode*)malloc(sizeof(BTNode));
    root->val = str[(*i)++];
    root->left = BulidTree(str, root->left, i);
    root->right = BulidTree(str, root->right, i);
    return root;
}
// 二叉树销毁
void BinaryTreeDestory(BTNode* root)
{
    if (root == NULL)
        return;
    BinaryTreeDestory(root->left);
    BinaryTreeDestory(root->right);
    free(root);
}
// 二叉树节点个数
int BinaryTreeSize(BTNode* root);
// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root);
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k);
// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root)
{
    if (root == NULL)
        return;
    printf("%c ", root->val);
    BinaryTreeInOrder(root->left);
    BinaryTreeInOrder(root->right);
}
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
    if (root == NULL)
        return;
    BinaryTreeInOrder(root->left);
    printf("%c ", root->val);
    BinaryTreeInOrder(root->right);
}
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
    if (root == NULL)
        return;
    BinaryTreeInOrder(root->left);
    BinaryTreeInOrder(root->right);
    printf("%c ", root->val);
}
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root);
// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root);

int main()
{
	char str[101] = { 0 };
	strcpy(str, "ABD##E#H##CF##G##");
	
	return 0;
}