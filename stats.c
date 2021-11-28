/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

// Helper Function For Sorting
int cmpfunc (const void * a, const void * b) {
   return (int)( *(unsigned char*)b - *(unsigned char*)a );
}


// MAIN 
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char* data, unsigned int length)
{
  printf("Median: %d\n",find_median(data, length));
  printf("Mean  : %d\n",find_mean(data, length));
  printf("Max   : %d\n",find_maximum(data, length));
  printf("Min   : %d\n",find_minimum(data, length));
}

void print_array(unsigned char* data, unsigned int length)
{
  for(unsigned int i=0; i<length; i++)
  {
    printf("%d ", data[i]);
  }
  printf("\n");

}

unsigned char find_median(unsigned char* data, unsigned int length)
{
  int median=0;
    
  // if number of elements are even
  if(length%2 == 0)
      median = (data[(length-1)/2] + data[length/2])/2;
  // if number of elements are odd
  else
      median = data[length/2];
  
  return median;
}

unsigned char  find_mean(unsigned char* data, unsigned int length)
{
  unsigned int sum = 0;
  for(unsigned int i=0; i<length; i++)
  {
    sum += data[i];
  }
  return sum/length;

}

unsigned char find_maximum(unsigned char* data, unsigned int length)
{
  return data[0];

}

unsigned char find_minimum(unsigned char* data, unsigned int length)
{
  return data[length - 1];

}

void sort_array(unsigned char* data, unsigned int length)
{
  qsort(data, length, sizeof(unsigned char), cmpfunc);
}

