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


For this project, the print_array and print_list functions are used to print the list after each swap.


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