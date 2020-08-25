#ifndef SEARCH_ALGO
#define SEARCH_ALGO

#include <stdlib.h>
#include <stdio.h>

/* 0-linear.c */
int linear_search(int *array, size_t size, int value);

/* 1-binary.c */
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);

#endif /* SEARCH_ALGO */
