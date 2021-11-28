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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief
 *
 * A function that prints the statistics of an array 
 * including minimum, maximum, mean, and median.
 *
 * @param data array of data
 * @param length length of array
 *
 * @return void
 */
void print_statistics(unsigned char* data, unsigned int length);

/**
 * @brief 
 *
 * Given an array of data and a length, prints the 
 * array to the screen
 *
 * @param data array of data
 * @param length length of array
 *
 * @return void
 */

void print_array(unsigned char* data, unsigned int length); 

/**
 * @brief 
 *
 * Given an array of data and a length, returns 
 * the median value
 *
 * @param data array of data
 * @param length length of array
 *
 * @return median of the array; 0 if array is empty
 */
unsigned char find_median(unsigned char* data, unsigned int length); 

/**
 * @brief 
 *
 * Given an array of data and a length, returns the mean
 *
 * @param data array of data
 * @param length length of array
 *
 * @return mean of the array; 0 if array is empty
 */
unsigned char find_mean(unsigned char* data, unsigned int length);

/**
 * @brief 
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param data array of data
 * @param length length of array
 *
 * @return maximum of the array; 0 if array is empty
 */
unsigned char find_maximum(unsigned char* data, unsigned int length);

/**
 * @brief 
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param data array of data
 * @param length length of array
 *
 * @return minimum of the array; 0 if array is empty
 */
unsigned char find_minimum(unsigned char* data, unsigned int length);

/**
 * @brief <Add Brief Description of Function Here>
 *
 * Given an array of data and a length, sorts the 
 * array from largest to smallest.  (The zeroth 
 * Element should be the largest value, and the 
 * last element (n-1) should be the smallest 
 * value. )
 *
 * @param data array of data
 * @param length length of array
 *
 * @return void
 */
void sort_array(unsigned char* data, unsigned int length);


#endif /* __STATS_H__ */
