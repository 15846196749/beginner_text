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

// 初始化队列 
void QueueInit(Queue* pq);
// 队尾入队列 
void QueuePush(Queue* pq, QDataType data);
// 队头出队列 
void QueuePop(Queue* pq);
// 获取队列头部元素 
QDataType QueueFront(Queue* pq);
// 获取队列队尾元素 
QDataType QueueBack(Queue* pq);
// 获取队列中有效元素个数 
int QueueSize(Queue* pq);
// 检测队列是否为空
bool QueueEmpty(Queue* pq);
// 销毁队列 
void QueueDestroy(Queue* pq);
