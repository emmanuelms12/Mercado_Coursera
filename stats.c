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
 * @file stats.c
 * @brief Performs basic analytics on a data set.
 *
 * This program performs basic analytics on data defined in the code. 
 * Statistics reported are: minimum, maximum, mean, and median. The program 
 * also sorts the data set from large to small. Both the statistics and the 
 * sorted data are reported to the console.
 *
 * @author Emmanuel Mercado
 * @date 4/29/2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

}

void sort_array(unsigned char* data_array, SIZE_TYPE size)
{
}

void print_array(unsigned char* data_array, SIZE_TYPE size)
{
}

unsigned char find_minimum(unsigned char* data_array, SIZE_TYPE size)
{
}

unsigned char find_maximum(unsigned char* data_array, SIZE_TYPE size)
{
}

unsigned char find_mean(unsigned char* data_array, SIZE_TYPE size)
{
}

unsigned char find_median(unsigned char* data_array, SIZE_TYPE size)
{
}
