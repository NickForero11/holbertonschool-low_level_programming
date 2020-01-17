#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>

/*Prototypes*/
int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int binary_search_driver(int *array, size_t left, size_t right, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
#endif
