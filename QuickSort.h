//
// Created by mying on 2018/11/9.
//

#ifndef REVIEW_QUICKSORT_H
#define REVIEW_QUICKSORT_H

#include <iostream>

using namespace std;
// 这些也是对的，第一次正确
//template <typename T>
//int __particial(T a[],int l,int r){
//    T v=a[l];
//    int j=l;
//    for(int i=l+1;i<=r;i++){
//        if(a[i]<v){
//            swap(a[++j],a[i]);
//        }
//    }
//    swap(a[j],a[l]);
//    return j;
//}
//template <typename T>
//void __quick(T a[],int l,int r){
//    if(l>=r){
//        return;
//    }
//    int p=__particial(a,l,r);
//    __quick(a,l,p-1);
//    __quick(a,p+1,r);
//}
//template <typename T>
//void QuickSort(T a[],int n){
//    __quick(a,0,n-1);
//}
//

//第二次正确
template <typename T>
int __partition(T a[],int l,int r){
    T value=a[l];
    int j=l;
    for(int i=l+1;i<=r;i++){
        if(a[i]<value){
            swap(a[i],a[++j]);//和swap(i,j)的区别
        }
    }
    swap(a[l],a[j]);
    return j;
}


template <typename T>
void __quick(T a[],int l,int r){
    if(l>=r){
        return;
    }
    int p=__partition(a,l,r);
    __quick(a,l,p-1);
    __quick(a,p+1,r);
}


template <typename T>
void QuickSort(T a[],int n){
    __quick(a,0,n-1);
}

#endif //REVIEW_QUICKSORT_H
