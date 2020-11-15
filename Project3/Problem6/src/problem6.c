#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//Dont touch
#include "problem6.h"

bool Enqueue(node_q* Queue, int value)
{
  node_t *p = (node_t*)malloc(sizeof(node_t));
  if (p == NULL)
  {
    pererror_function_queue(0);
    return false;
  }
  p->val = value;
  p->next = NULL;
  if (Queue->head == NULL)
  {
    Queue->head = p;
    Queue->tail = p;
  }
  else
  {
    Queue->tail->next = p;
    Queue->tail = p;
  }
  Queue->count++;
  Queue->tail->next = Queue->head;
  return true;
}

int Dequeue(node_q* Queue) {
  if ((Queue->count) == 0)
  {
    pererror_function_queue(1);
    return -1;
  }
  node_t *temp = Queue->head;
  int num = temp->val;
  Queue->head = Queue->head->next;
  Queue->tail->next = Queue->head;
  free(temp);
  Queue->count--;
  return num;
}





void pererror_function_queue(int error_code){
  switch(error_code){
    case 0: printf("Failt to enqueueu\n"); break;
    case 1: printf("Failt to dequeueu\n"); break;
    default: printf("non");
  }
}

