//
//  main.cpp
//  QuickSort
//
//  Created by kidd on 2018/8/1.
//  Copyright © 2018年 Kidd. All rights reserved.
//

#include <iostream>
using namespace std;

int Partition(int arr[], int low, int high){
    int pivot = arr[low]; //将当前表中第一个元素设为枢轴值，对表进行划分
    while (low < high) {
        while (low < high && arr[high] >= pivot) {
            --high;
        }
        arr[low] = arr[high];
        
        while (low < high && arr[low] <= pivot) {
            ++low;
        }
        arr[high] = arr[low];
    }
    arr[low] = pivot;
    return low;
}

void QuickSort(int arr[], int low, int high){
    if (low < high) {
        int pivotpos = Partition(arr, low, high);
        QuickSort(arr, low, pivotpos-1);
        QuickSort(arr, pivotpos+1, high);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "This is QuickSort !\n";
    
    int a[] = {1,4,55,64,2,41,8,5,17,38,6,14,26};
    int length = sizeof(a)/sizeof(*a);
    cout << "长度:" << sizeof(a)/sizeof(*a) << endl;
    QuickSort(a, 0, length-1);
    
    for (int i = 1; i < length; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
