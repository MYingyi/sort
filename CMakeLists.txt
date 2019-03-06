cmake_minimum_required(VERSION 3.10)
project(review)

set(CMAKE_CXX_STANDARD 11)

add_executable(review main.cpp SelectionSort.h SelectSort.h InsertSort.h SortTestHelper.h MergeSort.h QuickSort.h Heap.h HeapSort.h BubbleSort.h HeapingSort.h)