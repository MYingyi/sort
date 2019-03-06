//
// Created by mying on 2018/11/8.
//

#ifndef REVIEW_SELECTSORT_H
#define REVIEW_SELECTSORT_H

#include<iostream>
using namespace std;
template <typename T>
//不稳定，时间复杂度（O（n））
void selectSort(T a[],int n){
    int i=0;
    for(;i<=n-1;i++){
        int p=i;
        for(int j=i;i<=n-1;j++){
            if(a[j]<a[p])
                p=j;
        }
        swap(a[i],a[p]);
    }
}
#endif //REVIEW_SELECTSORT_H
