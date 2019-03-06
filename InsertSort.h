//
// Created by mying on 2018/11/8.
//

#ifndef REVIEW_INSERTSORT_H
#define REVIEW_INSERTSORT_H

#include <iostream>
using namespace std;
template <typename T>
void __insertSort(T a[],int l,int r){
    for(int i=l+1;i<=r;i++){
        T value = a[i];
        int j;
        for(j=i-1;j>=l&&a[j]>value;j--){ //error:j<=i
            a[j+1]=a[j];
//            cout<<j<<endl;
        }
//        cout<<"*"<<j;
        a[j+1]=value;
    }
}
template <typename T>
void InsertSort(T a[],int n){
    __insertSort(a,0,n-1);
}
#endif //REVIEW_INSERTSORT_H
