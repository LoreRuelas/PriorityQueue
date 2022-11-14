//
// Created by loren on 09/11/2022.
//
#include <stdlib.h>
#include <stdio.h>
#ifndef PRIORITYQUEUE_PRIORITYQUEUE_H
#define PRIORITYQUEUE_PRIORITYQUEUE_H

typedef struct priorityQueue PriorityQueue;


PriorityQueue* p_queue_new();
void p_queue_enqueue(PriorityQueue *pq, void* data, int priority);
void print(PriorityQueue *pq);
int p_queue_empty(PriorityQueue *pq);
/*
 * void *p_queue_dequeue(PriorityQueue);
*/
#endif //PRIORITYQUEUE_PRIORITYQUEUE_H
