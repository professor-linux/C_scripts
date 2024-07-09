
#include "array_functions.h"
#include <stdio.h>

// print all numbers in array to standard output
int printAll(int collection[], int size){
  for (int i = 0; i < size; i++){
    printf("Num: %d\n", collection[i]);
  }
  return 0;
}

// Get sum of N-Size numbers in array
int sum(int collection[], int size){
  int sum = 0;
  for (int i = 0; i < size; i++){
    sum += collection[i];
  }
  return sum;
}


// Find average of numbers in array
double average(int collection[], int size){
 int total = sum(collection, size);
 double average = (double)total / size ;
 return average;
}

// Find the number that is the highest in array
int findMax(int collection[], int size){
  int maxInt = 0;
  
  for(int i = 0; i < size; i++ ){
    if(collection[i] > maxInt){
      maxInt = collection[i];
    }
  }
   return maxInt;
}

// Find the number that is the lowest in array
int findMin(int collection[], int size){
  int minInt = collection[0];

  for(int i = 0; i < size; i++ ){
    if(collection[i] < minInt){
      minInt = collection[i];
    }
  }
   return minInt;
}

// Bubble Sort

void sort(int collection[], int size){

  // loops over size of arr - 1 
  for(int i = 0; i < size -1; i++){
    // loops over all elements in array to compare them
     for(int j = 0; j < size-i-1; j++){

          if(collection[j] > collection[j+1]){
            int temp = collection[j];
            collection[j] = collection[j+1];
            collection[j+1] = temp;
          }
       
     }    

  }
  
  
}
