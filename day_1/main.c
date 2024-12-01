#include <stdio.h>
#include <stdlib.h>
#include "input.h"


void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        int swapped = 0;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

int main() {

  printf("Hello AoC Day 1\n\n");

  int len = sizeof(left) / sizeof(left[0]);
  // sort left numbers
  bubbleSort(left, len);
  // sort right numbers
  bubbleSort(right, len);

  int sum = 0;
  // print numbers side by side
  for (int i = 0; i < len; i++) {
    sum += abs(left[i]-right[i]);
    //printf("%d\t%d distance: %d\n", left[i], right[i], abs(left[i] - right[i]) );
  }

  printf("Sum of the differences: %d\n", sum);

  printf("Now calculating the similarity score:\n");
  sum = 0;
  for (int i = 0; i < len; i++) {
    int count = 0;  
    for (int j = 0; j < len; j++) {
      if (right[j] == left[i]) count++;
    }
    //printf("%d\t count:%d\n", left[i], count);
    sum += left[i] * count;
  }

  printf("Similarity score: %d\n", sum);



  return 0;
}
