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
 * @file stats.h 
 * @brief Calculates basic descriptive statistics on a data set.
 *
 * This program calculates basic descriptive statistics on data defined in 
 * the code. Results reported are: minimum, maximum, mean, and median. The 
 * program also sorts the data set from large to small. Both the statistics and 
 * the sorted data are reported to the console.
 *
 * @author Emmanuel Mercado
 * @date 5/5/2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Sorts an array of the specified size from largest to smallest
 *
 * Given an array of data and its size, sorts the array from largest to 
 * smallest. The first element of the array contains the largest number.
 *
 * @param unsigned char*: pointer to the first element of the array.
 * @param unsigned int  : size of the array
 *
 * @return Array passed as parameter sorted from largest to smallest.
 */
void sort_array(unsigned char*, unsigned int);

/**
 * @brief Prints the specified array to the screen.
 *
 * Prints all elements of the array passed as a parameter.
 *
 * @param unsigned char*: pointer to the first element of the array.
 * @param unsigned int  : size of the array
 *
 * @return Nothing
 */
void print_array(unsigned char*, unsigned int);

/**
 * @brief Finds the minimum value in the specified array.
 *
 * Returns the minimum value in the specified array.
 *
 * @param unsigned char*: pointer to the first element of the array.
 * @param unsigned int  : size of the array
 *
 * @return Minimum value contained in the array.
 */
unsigned char find_minimum(unsigned char[], unsigned int);
/**
 * @brief Finds the maximum value in the specified array.
 *
 * Returns the maximum value in the specified array.
 *
 * @param unsigned char*: pointer to the first element of the array.
 * @param unsigned int  : size of the array
 *
 * @return Maximum value contained in the array.
 */
unsigned char find_maximum(unsigned char*, unsigned int);

/**
 * @brief Calculates the mean of the specified array.
 *
 * Returns the mean value of the specified array.
 *
 * @param unsigned char*: pointer to the first element of the array.
 * @param unsigned int  : size of the array
 *
 * @return Mean value of the elements in the array.
 */
unsigned char find_mean(unsigned char*, unsigned int);

/**
 * @brief Calculates the median of the specified array.
 *
 * Returns the median value of the specified array.
 *
 * @param unsigned char*: pointer to the first element of the array.
 * @param unsigned int  : size of the array
 *
 * @return Median value of the elements in the array.
 */
unsigned char find_median(unsigned char*, unsigned int);

/**
 * @brief Prints basic descriptive statistics of an array of data to the 
 * console.
 *
 * Prints basic descriptive statistics of the data contained in the specified 
 * array to the console. Results include: minimum, maximum, mean, and median.
 *
 * @param unsigned char*: pointer to the first element of the array.
 * @param unsigned int  : size of the array
 *
 * @return Nothing.
 */
void print_statistics(unsigned char*, unsigned int);

#endif /* __STATS_H__ */
