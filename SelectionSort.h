//
// Created by mying on 2018/11/8.
//

#ifndef REVIEW_SELECTIONSORT_H
#define REVIEW_SELECTIONSORT_H
#include<iostream>
using namespace std;
template <typename T>
void __selectionsort(T a[],int l,int r){
    int i=l;
    for(;i<=r;i++){
        int p = i;
        for(int j=i;j<=r;j++){
            if(a[j]<a[p])
                p=j;
        }
        swap(a[i],a[p]);
    }
}
template <typename T>
void SelectionSort(T a[],int n){
    __selectionsort(a,0,n-1);
}
#endif //REVIEW_SELECTIONSORT_H
