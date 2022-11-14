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
/*
PriorityQueue* p_queue_new();
void p_queue_enqueue(PriorityQueue *pq, void* data, int priority);
void *p_queue_dequeue(PriorityQueue);
int p_queue_empty(PriorityQueue *pq);
*/
#endif //PRIORITYQUEUE_PRIORITYQUEUE_H
