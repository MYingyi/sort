//
// Created by Mying on 2019/3/5.
//

#ifndef REVIEW_HEAPINGSORT_H
#define REVIEW_HEAPINGSORT_H
template <typename T>
void __shiftDown(T arr[],int n,int k){
    while (k * 2 +1 < n) {
        int j = 2 * k + 1;
        if (j + 1 < n && arr[j] < arr[j + 1])
            j += 1;

        if (arr[k] >= arr[j])
            break;
        swap(arr[k], arr[j]);
        k = j;
    }
}
template <typename T>
//原地排序
void heapSort(T arr[],int n){
    //heapify
    for(int i=(n-1)/2;i>=0;i--){
        __shiftDown(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        __shiftDown(arr,i,0);
    }
}
#endif //REVIEW_HEAPINGSORT_H
