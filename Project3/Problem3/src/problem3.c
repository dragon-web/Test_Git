#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Dont touch
#include "problem3.h"

count = 0;   // a flag 
head = 0;
tail = 0;
//Implement Function in header file
bool Enqueue(int *Queue, int value){
  if(head == tail && count == 1) // queue is full 
  {
    pererror_function_queue(0);
    return false;
  }
  {
   Queue[tail] = value;
   tail = (tail + 1 ) % NUM_QUEUE_SIZE; 
    count = 1;
  }
}
int Dequeue(int *Queue){
  if(head == tail && count == 0)
  {
    pererror_function_queue(1);
    return false;
  }
  int num = Queue[head];
  head = (head + 1) % NUM_QUEUE_SIZE;
  count = 0;
  return num;
}
void pererror_function_queue(int error_code){
   switch(error_code){
     case 0: printf("Fail to enqueue\n"); break;
     case 1: printf("Fail to dequeue\n"); break;
     default:printf("Non\n"); break;
   }
}

