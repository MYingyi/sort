//
// Created by mying on 2018/11/8.
//

#ifndef REVIEW_MERGESORT_H
#define REVIEW_MERGESORT_H

#include <iostream>
using namespace std;
template <typename T>
void __merge(T a[],int l,int mid,int r){
    T b[r-l+1];
    for(int i=0;i<r-l+1;i++){
        b[i]=a[i+l];
    }
    int i=0;
    int j=mid-l+1;
    int k;//k是a的下标,所以k可以和l,r直接比较；但是i,j需要考虑转化
    for(k=l;i<=mid-l&&j<=r-l;k++){
        a[k]=(b[i]<b[j]?b[i++]:b[j++]);
    }
    while(k<=r&&i>mid-l){
        a[k++]=b[j++];
    }
    while(k<=r&&j>r-l){
        a[k++]=b[i++];
    }
}
template <typename T>
void __MergeSort(T a[],int l,int r){
    if(l>=r){
        return;
    }
    int mid = (l+r)/2;
//    有递归的意思，函数定义里的递归子函数当作对函数的引用，所以不用再次定义
    __MergeSort(a,l,mid);
    __MergeSort(a,mid+1,r);
    __merge(a,l,mid,r);
}
template <typename T>
void MergeSort(T a[],int n){
//    mid不是在这里加
    __MergeSort(a,0,n-1);
}
#endif //REVIEW_MERGESORT_H
