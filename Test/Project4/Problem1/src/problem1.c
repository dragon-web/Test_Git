#include "problem1.h"
void Swap(int *num1, int *num2)
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
  for (i = 0; i < SIZE - 1; ++i)
  {
    for (j = 0; j < SIZE - 1 - i; ++j)
    {
      if (dataset[j] > dataset[j + 1])
      {
        int temp = dataset[j];
        dataset[j] = dataset[j + 1];
        dataset[j + 1] = temp;
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
  for (i = 0; i < SIZE - 1; ++i)
  {
    int min = i;
    for (j = i + 1; j < SIZE; ++j)
    {
      if (dataset[min] > dataset[j])
      {
        min = j;
      }
      Swap(&dataset[i], &dataset[min]);
    }
  }
  return dataset;
}

int* insertion_prj4(FILE *fp_in)
{
  int *dataset = (int*)malloc(sizeof(int)*SIZE);
  if (dataset == NULL) {
    printf("Mem alloc fail\n");
    return NULL;

  }
  fread(dataset, sizeof(int), SIZE, fp_in);
  int i, j;
  int temp;
  for (i = 1; i < SIZE; i++) {
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

void max_heapify(int arr[], int start, int end)
{
  int dad = start;
  int son = dad * 2 + 1;
  while (son <= end)  
  {
    if (son + 1 <= end && arr[son] < arr[son + 1])

      son++;
    if (arr[dad] > arr[son]) 
      return;
    else 
    {
      Swap(&arr[dad], &arr[son]);
      dad = son;
      son = dad * 2 + 1;
    }
  }
}
int *heap_prj4(FILE *fp_in) {
  printf("heap\n");
  int *dataset = (int*)malloc(sizeof(int)*SIZE);
  if (dataset == NULL) {
    printf("Mem alloc fail\n");
    return NULL;
  }
  fread(dataset, sizeof(int), SIZE, fp_in);
  int left = 0;
  int right = SIZE;
  int i;
  for(i = SIZE / 2 - 1;i >= 0;--i)
  {
    max_heapify(dataset,i,SIZE-1);
  }
  for(i = SIZE-1;i > 0;i--)
  {
    Swap(&dataset[0],&dataset[i]);
    max_heapify(dataset,0,i-1);
  } 
  return dataset;
}


void mergeSort(int arr[], int start, int end) {
  if (start >= end)
    return;
  int mid = (start + end) / 2;
  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);
  merge(arr, start, mid, end);
}

int *merge_prj4(FILE *fp_in) {
  int *dataset = (int*)malloc(sizeof(int)*SIZE);
  if (dataset == NULL) {
    printf("Mem alloc fail\n");
    return NULL;

  }
  fread(dataset, sizeof(int), SIZE, fp_in);
  int start = 0;
  int right = SIZE - 1;
  mergeSort(dataset, start, right);
  return dataset;

}


void merge(int *dataset, int left, int mid, int right) {
  int result[SIZE];
  int k = 0;
  int i = left;
  int j = mid + 1;
  while (i <= mid && j <= right) {
    if (dataset[i] < dataset[j]) {
      result[k++] = dataset[i++];


    }
    else {
      result[k++] = dataset[j++];


    }


  }
  if (i == mid + 1) {
    while (j <= right)
      result[k++] = dataset[j++];


  }
  if (j == right + 1) {
    while (i <= mid)
      result[k++] = dataset[i++];


  }
  for (j = 0, i = left; j < k; i++, j++) {
    dataset[i] = result[j];

  }

}


void QuickSort(int array[], int low, int high) {
  if (low < high) {
    //divide index 
    int standard = partition(array, low, high);//Recursive Sort
    //        //Sort left
    QuickSort(array, low, standard - 1);
    //                //Sort right
    QuickSort(array, standard + 1, high);
    //                      
  }
}

int *quick_prj4(FILE *fp_in) {
  int *dataset = (int*)malloc(sizeof(int)*SIZE);
  if (dataset == NULL) {
    printf("Mem alloc fail\n");
    return NULL;

  }
  fread(dataset, sizeof(int), SIZE, fp_in);
  int left = 0;
  int right = SIZE - 1;
  QuickSort(dataset, left, right);
  return dataset;
}

int partition(int *dataset, int left, int right)
{
  int key = dataset[left];
  while (left < right) {
    while (left < right && dataset[right] >= key) {
      right--;

    }

    if (left < right) {
      dataset[left] = dataset[right];  //When a smaller value than array[i] is found, the following value array[j] is assigned to it 
    }
    while (left < right && dataset[left] <= key) {
      left++;
    }
    if (left < right) {
      dataset[right] = dataset[left];  //When a larger value than array[j] is found, the previous value array[i] is assigned to it 

    }

  }
  dataset[left] = key;
  return left;
}

