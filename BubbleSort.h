//
// Created by Mying on 2019/3/5.
//

#ifndef REVIEW_BUBBLESORT_H
#define REVIEW_BUBBLESORT_H

#include <iostream>
using namespace std;
template <typename T>
void __BubbleSort(T a[],int n){
    for (int i = 0; i < n -1; i++){
        for (int j = n - 1; j > i ; j--)
        {
            if (a[j-1] > a[j]){
                swap(a[j-1],a[j]);
            }
        }
    }
}

template <typename T>

void BubbleSort(T a[],int n){
    __BubbleSort(a,n);
}
#endif //REVIEW_BUBBLESORT_H
