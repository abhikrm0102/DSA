#include <stdio.h>

int count_desc=0,count_asc=0;
void bubbleSort_descend(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] < array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        count_desc++;
      }
    }
  }
}

void bubbleSort_ascend(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        count_asc++;
      }
    }
  }
}

int main() {
    int size;
    scanf("%d",&size);
    int data[size],data1[size];
    for(int i=0;i<size;i++){
        scanf("%d",&data[i]);
        data1[i]=data[i];
    }
  bubbleSort_descend(data, size);
  bubbleSort_ascend(data1, size);
  if(count_desc>count_asc)
  printf("%d",count_asc);
  else
  printf("%d",count_desc);
}