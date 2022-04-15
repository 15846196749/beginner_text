#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

struct BinaryTreeNode;

typedef struct BinaryTreeNode* QDataType;
typedef struct QNode
{
	QDataType val;
	struct QNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

// ��ʼ������ 
void QueueInit(Queue* pq);
// ��β����� 
void QueuePush(Queue* pq, QDataType data);
// ��ͷ������ 
void QueuePop(Queue* pq);
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* pq);
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* pq);
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* pq);
// �������Ƿ�Ϊ��
bool QueueEmpty(Queue* pq);
// ���ٶ��� 
void QueueDestroy(Queue* pq);
