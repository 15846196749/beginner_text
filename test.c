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

// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
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
// ����������
void BinaryTreeDestory(BTNode* root)
{
    if (root == NULL)
        return;
    BinaryTreeDestory(root->left);
    BinaryTreeDestory(root->right);
    free(root);
}
// �������ڵ����
int BinaryTreeSize(BTNode* root);
// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root);
// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k);
// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root)
{
    if (root == NULL)
        return;
    printf("%c ", root->val);
    BinaryTreeInOrder(root->left);
    BinaryTreeInOrder(root->right);
}
// �������������
void BinaryTreeInOrder(BTNode* root)
{
    if (root == NULL)
        return;
    BinaryTreeInOrder(root->left);
    printf("%c ", root->val);
    BinaryTreeInOrder(root->right);
}
// �������������
void BinaryTreePostOrder(BTNode* root)
{
    if (root == NULL)
        return;
    BinaryTreeInOrder(root->left);
    BinaryTreeInOrder(root->right);
    printf("%c ", root->val);
}
// �������
void BinaryTreeLevelOrder(BTNode* root);
// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root);

int main()
{
	char str[101] = { 0 };
	strcpy(str, "ABD##E#H##CF##G##");
	
	return 0;
}