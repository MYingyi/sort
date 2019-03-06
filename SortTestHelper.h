//
// Created by mying on 2018/11/8.
//

#ifndef REVIEW_SORTTESTHELPER_H
#define REVIEW_SORTTESTHELPER_H
#include<iostream>
#include <ctime>
#include <cassert>
using namespace std;
//定义一个新的命名空间
namespace SortTestHelper{
    int* generateRandomArray(int n,int rangeL,int rangeR){
        assert(rangeL<=rangeR);
        int *arr = new int[n];
        srand(time(NULL));
        for(int i=0;i<n;i++)
            arr[i] = rand()%(rangeR-rangeL+1)+rangeL;
        return arr;
    }
    int* copyIntArray(int arr[],int n){
        int *arr1 = new int[n];
//        memcpy(arr1,arr,sizeof(arr));
        for(int i=0;i<n;i++){
            arr1[i] = arr[i];
        }
        return arr1;
    }
    template <typename T>
    void PrintArray(T a[],int n){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
#endif //REVIEW_SORTTESTHELPER_H
