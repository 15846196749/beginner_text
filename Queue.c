#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}

void QueuePush(Queue* pq, QDataType data)
{
	assert(pq);
	QNode* NewNode = (QNode*)malloc(sizeof(QNode));
	if (NewNode == NULL)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	NewNode->val = data;
	NewNode->next = NULL;
	if (pq->tail == NULL)
	{
		assert(pq->head == NULL);
		pq->head = pq->tail = NewNode;
	}
	else
	{
		pq->tail->next = NewNode;
		pq->tail = pq->tail->next;
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head && pq->tail);
	QNode* tmp = pq->head;
	if (tmp->next == NULL)
	{
		free(tmp);
		pq->head = pq->tail = NULL;
	}
	else
	{
		pq->head = pq->head->next;
		free(tmp);
	}
}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	if (pq->head == NULL)
		exit(-1);
	return pq->head->val;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	if (pq->head == NULL)
		exit(-1);
	return pq->tail->val;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	int count = 0;
	QNode* tmp = pq->head;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return count;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	if (pq->head)
		return false;
	return true;
}

void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* tmp = pq->head;
	while (tmp)
	{
		QNode* next = tmp->next;
		free(tmp);
		tmp = next;
	}
	pq->head = pq->tail = NULL;
}
