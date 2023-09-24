0x1B. C - Sorting algorithms & Big
==================================

This project implements different sorting algorithms and the time complexity for each of the sorting algorithms.

The list to be sorted is printed with each level of swaps made.

The time complexity is saved in a file with each line corresponding to the best case, average case and worst case scenerio respectively.

Kindly note some of the format for the time complexity.

O(1)
O(n)
O(n!)
n square -> O(n^2)
log(n) -> O(log(n))
n * log(n) -> O(nlog(n))
n + k -> O(n+k)

For this project, here is the print_array and print_list functions.

print_array function
=====================
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}


print_list function
====================
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}


File: 0-bubble_sort.c, 0-O
===========================
A bubble sort function that sorts an array of integer in ascending order.
Prototype: void bubble_sort(int *array, size_t size);

0-O contains the time complexity of the sorting algorithm

File: 1-insertion_sort_list.c, 1-O
===================================
An insertion sort function that sorts a doubly linked list of integers in ascending order.
Prototype: void insertion_sort_list(listint_t **list);

1-O contains the time complexity of the sorting algorithm


File: 2-selection_sort.c, 2-O
==============================
A selection sort function that sorts an array of integers in ascending order
Prototype: void selection_sort(int *array, size_t size);
2-O contains the time complexity of the sorting algorithm

File: 3-quick_sort.c, 3-O
==========================
A quick sort function that sorts an array of integers in ascending order.
Prototype: void quick_sort(int *array, size_t size);
3-O contains the time complexity of the sorting algorithm