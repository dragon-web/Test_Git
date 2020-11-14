#include<stdio.h>
#include<stdlib.h>

#include"Single_linked_list.h"

int main()
{
  head = (node_t*)malloc(sizeof(node_t)); 
  
  insert(head,1);
  printlist(head);
  insert(head,2);
  printlist(head);
  insert(head,3);
  printlist(head);
  insert(head,4);
  printlist(head);
  insert(head,5);
  printlist(head);
  insert(head,6);
  printlist(head);
  insert(head,7);
  printlist(head);
  insert(head,3);
  printlist(head);
  insert(head,8);
  printlist(head);
  insert(head,9);
  printlist(head);
  Delete(head,3);
  printlist(head);
  Delete(head,10);
  printlist(head);
  printf("%d\n",find(head,3) );
  printf("%d\n",find(head,13));
  printf("%d\n",findkth(head,7));
  printf("%d\n",findkth(head,13));
  printf("Find 1st");
  printf("%d\n",findkth(head,1));
  printf("%d\n",isEmpty(head));
  makeEmpty(head);
  printf("%d\n",isEmpty(head));
  printlist(head);
  return 0;
}
