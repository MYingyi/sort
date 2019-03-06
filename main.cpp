#include <iostream>
#include "selectSort.h"
#include "selectionsort.h"
#include "InsertSort.h"
#include "SortTestHelper.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "HeapingSort.h"

using namespace std;

int main() {
    int n = 10;
//    测试一：一般性测试
    cout << "Test for Random Array,size = " << n << ",random range [0," << n << "]" << endl;
    int *arr1 = SortTestHelper::generateRandomArray(n, 0, n);
    int *arr2 = SortTestHelper::copyIntArray(arr1, n);
    int *arr3 = SortTestHelper::copyIntArray(arr1, n);
    int *arr4 = SortTestHelper::copyIntArray(arr1, n);
    int *arr5 = SortTestHelper::copyIntArray(arr1, n);
    int *arr6 = SortTestHelper::copyIntArray(arr1, n);


    MergeSort(arr1, n);
    QuickSort(arr2, n);
    SelectionSort(arr3,n);
    InsertSort(arr4,n);
//    heapSort1(arr3, n);
//    heapSort2(arr4, n);
    heapSort(arr5, n);
    BubbleSort(arr6,n);
    cout << "MergeSort:" << endl;
    SortTestHelper::PrintArray(arr1, n);
    cout << "QuickSort:" << endl;
    SortTestHelper::PrintArray(arr2, n);
//    cout << "HeapSort1:" << endl;
//    SortTestHelper::PrintArray(arr3, n);
//    cout << "HeapSort2:" << endl;
//    SortTestHelper::PrintArray(arr4, n);
    cout << "SelectionSort:" << endl;
    SortTestHelper::PrintArray(arr3, n);
    cout << "InsertSort:" << endl;
    SortTestHelper::PrintArray(arr4, n);
    cout << "HeapSort:" << endl;
    SortTestHelper::PrintArray(arr5, n);
    cout << "BubbleSort:" << endl;
    SortTestHelper::PrintArray(arr6, n);
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    delete[] arr5;

    cout << endl;
}

//        测试二：测试近乎有序的数
        // 组

//        测试三







//int main() {
//    int n=10;
//    int *arr = SortTestHelper::generateRandomArray(n,0,n);
//
////    int a[7] = {1,10,8,2,6,9,10};
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
////    selectSort(arr,n);  //这个还不行
////    SelectionSort(arr,n);
////    InsertSort(arr,n);
////    MergeSort(arr,n);
//    QuickSort(arr,n);
//    cout<<endl;
//    SortTestHelper::PrintArray(arr,n);
//    return 0;
//}