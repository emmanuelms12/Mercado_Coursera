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
 * @brief Calculates basic descriptive statistics on a data set.
 *
 * This program calculates basic descriptive statistics on data defined in 
 * the code. Results reported are: minimum, maximum, mean, and median. The 
 * program also sorts the data set from large to small. Both the statistics and 
 * the sorted data are reported to the console.
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

  printf("\nSource data set\n");
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  sort_array(test, SIZE);
  printf("\nSorted data set\n");
  print_array(test, SIZE);
  return;
}

void print_statistics(unsigned char* data_array, unsigned int size)
{
	printf("\nData set statistics:\n");
	printf("Min    : %d\n", find_minimum(data_array, size));
	printf("Max    : %d\n", find_maximum(data_array, size));	
	printf("Mean   : %d\n", find_mean(data_array, size));
	printf("Median : %d\n", find_median(data_array,size));
	return;
}

void sort_array(unsigned char* data_array, unsigned int size)
{
	for (unsigned int base_idx=0; base_idx<size-1; base_idx++)
	{
//		printf("[%d]:%d\n", base_idx, data_array[base_idx]);
		for (unsigned int target_idx=base_idx+1; target_idx<size; target_idx++)
		{
//			printf("\t[%d]:%d\n", target_idx, data_array[target_idx]);
			if (data_array[target_idx]>data_array[base_idx])
			{
				unsigned char tmp = data_array[base_idx];
				data_array[base_idx]=data_array[target_idx];
				data_array[target_idx]=tmp;
//				printf("\t\t[%d]:%d\n", base_idx, data_array[base_idx]);
//				printf("\t\t[%d]:%d\n", target_idx, data_array[target_idx]);
			}
		}
	}
	return;
}

void print_array(unsigned char* data_array, unsigned int size)
{
	for (unsigned int idx=0; idx<size; idx++)
	{
		printf("[%d]:%d\n", idx, data_array[idx]);
	}
	return;
}

unsigned char find_minimum(unsigned char* data_array, unsigned int size)
{
	unsigned char min=data_array[0];
	for (unsigned int target_idx=1; target_idx<size; target_idx++)
	{
		min=data_array[target_idx]<min ? data_array[target_idx] : min;
	}
	return min;
}

unsigned char find_maximum(unsigned char* data_array, unsigned int size)
{
	unsigned char max=data_array[0];
	for (unsigned int target_idx=1; target_idx<size; target_idx++)
	{
		max=data_array[target_idx]>max ? data_array[target_idx] : max;
	}
	return max;
}

unsigned char find_mean(unsigned char* data_array, unsigned int size)
{
	unsigned long acc=0;
	for (unsigned int target_idx=1; target_idx<size; target_idx++)
	{
		acc+=data_array[target_idx];
	}
//	printf("sum:%ld\n", acc);
	return acc/size;
}

void copy_array(unsigned char* source_array, unsigned char* target_array, unsigned int size)
{
	for (unsigned int idx=0; idx<size; idx++)
	{
		target_array[idx]=source_array[idx];
	}
	return;
}

unsigned char find_median(unsigned char* data_array, unsigned int size)
{
	unsigned char sorted_array[size];
	copy_array(data_array, sorted_array, size);
	sort_array(sorted_array, size);
//	print_array(sorted_array, size);
	if (size%2==0)
	{
		unsigned long median=sorted_array[(size/2)-1];
		median+=sorted_array[size/2];
		return median/2;
	}
	else
	{
		return sorted_array[size/2]; 
	}
}
