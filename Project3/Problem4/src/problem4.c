#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Dont touch
#include "problem4.h"

count = 0;
//Implement Function in header file
bool Push(node_t *Stack, int value){
  if( !insert(Stack,value)) 
  {
      pererror_function_stack(0);
      return false;
  }   
  return true; 
}
int Pop(node_t *Stack){ 
  if(isEmpty(Stack))
  {
    pererror_function_stack(1); // stack is empty
    return 0;
  }
  {
    node_t* p = Stack->next;
    int num = p->val;
    Stack->next = p->next;
    free(p);
    return num;
  }

  
  node_t *p = head->next;
 

  
}
void pererror_function_stack(int error_code){
  switch(error_code){
    case 0: printf("fail to push\n"); break;
    case 1: printf("fail to pop\n"); break;
    default : printf("non\n"); break;
  }
}

