#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Dont touch
#include "problem4.h"

count = 0;
//Implement Function in header file
bool Push(node_t *Stack, int value){
  if( insert(Stack,value)) 
  {
      pererror_function_stack(0);
      return false;
  }  
   

}
int Pop(node_t *Stack){
//Write your own code below
}
void pererror_function_stack(int error_code){
  switch(error_code){
    case 0: printf("fail to push\n"); break;
    case 1: printf("fail to push\n"); break;
    default : printf("non\n"); break;
  }
}

