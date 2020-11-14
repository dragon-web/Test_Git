#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Dont touch
#include "problem6.h"

//Implement Function in header file
bool Enqueue(node_q *Queue, int value){
//Write your own code below
}
int Dequeue(node_q *Queue){
//Write your own code below

}
void pererror_function_queue(int error_code){
  switch(error_code){
   case 0: printf("Failt to enqueueu\n"); break;
   case 1: printf("Failt to dequeueu\n"); break;
    default: printf("non");
  }
}

