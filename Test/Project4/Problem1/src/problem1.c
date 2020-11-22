#include "problem1.h"


void Swap(int *num1,int *num2)
{
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

int *bubble_prj4(FILE *fp_in) {
  int *dataset = (int*)malloc(sizeof(int)*SIZE);
  if (dataset == NULL) {
    printf("Mem alloc fail\n");
    return NULL;
  }
  fread(dataset, sizeof(int), SIZE, fp_in);
  int i = 0;
  int j = 0;
  for(i = 0; i < SIZE - 1;++i)
  {
    for(j = 0; j < SIZE -1 -i ;++j)
    {
      if(dataset[j] > dataset[j+1])
      {
        int temp = dataset[j];
        dataset[j] = dataset[j+1];
        dataset[j+1] = temp;
      }
    }
  }
  return dataset;
}

int *selection_prj4(FILE *fp_in) {
  int *dataset = (int*)malloc(sizeof(int)*SIZE);
  if (dataset == NULL) {
    printf("Mem alloc fail\n");
    return NULL;
  }
  fread(dataset, sizeof(int), SIZE, fp_in);
  int i = 0;
  int j = 0;
  for(i = 0; i < SIZE;++i)
  {
    for(j = i+1;j < SIZE;++j)
    {

      if(dataset[i] > dataset[j])
      {
        int temp = dataset[i];
        dataset[i] = dataset[j];
        dataset[j] = temp;
      }
    }
    return dataset;
  }

  int *insertion_prj4(FILE *fp_in) {
    int *dataset = (int*)malloc(sizeof(int)*SIZE);
    if (dataset == NULL) {
      printf("Mem alloc fail\n");
      return NULL;
    }
    fread(dataset, sizeof(int), SIZE, fp_in);
    int i, j;                                    
    int temp;                                     
    for (i = 1; i < n; i++) {
      j = i;
      temp = dataset[i];                         
      while (j > 0 && temp < dataset[j - 1]) {   
        dataset[j] = dataset[j - 1];             
        j--;                                 
      }
      dataset[j] = temp;                         
    }
    return dataset;
  }

  int *heap_prj4(FILE *fp_in) {
    printf("heap");
    int *dataset = (int*)malloc(sizeof(int)*SIZE);
    if (dataset == NULL) {
      printf("Mem alloc fail\n");
      return NULL;
    }
    fread(dataset, sizeof(int), SIZE, fp_in);
    //Write your own code below


    return dataset;
  }

  int *merge_prj4(FILE *fp_in) {
    int *dataset = (int*)malloc(sizeof(int)*SIZE);
    if (dataset == NULL) {
      printf("Mem alloc fail\n");
      return NULL;
    }
    fread(dataset, sizeof(int), SIZE, fp_in);
    //Write your own code below

    return dataset;
  }

  void merge(int *dataset, int left, int mid, int right) {
    //Write your own code below
  }



  int *quick_prj4(FILE *fp_in) {
    int *dataset = (int*)malloc(sizeof(int)*SIZE);
    if (dataset == NULL) {
      printf("Mem alloc fail\n");
      return NULL;
    }
    fread(dataset, sizeof(int), SIZE, fp_in);
    


    return dataset;
  }

  int partition(int *dataset, int low, int high) {
    int key = dataset[left];
    while(left < right)
    {
      while(left<right && dataset[right] >= key)
        right--;
      Swap(&dataset[left], &dataset[right]);
      while(left<right && dataset[left] < key)
        left++;
      Swap(&dataset[left], &dataset[right]);

    }
    return left;
  }
