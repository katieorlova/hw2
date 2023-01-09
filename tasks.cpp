#include <iostream>
#include "tasks.h"

//task 1
void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

//task 5
void sort (int arr1[], int size) {
    int arr2[size], i, j, k;

    for (i = 0, j = 0, k = size - 1; i < size; ++i) {
        if ( arr1[i] < 0 )
            arr2[j++] = arr1[i];
        else
            arr2[k--] = arr1[i];
    }

    for (j = 0; j < size; ++j)
        std::cout << arr2[j] << " ";
    std::cout << std::endl;
}

//task 8
int sum(int* row, int n) {
    bool zero = false;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (row[i] == 0) {
            if (!zero)
                zero = true;
            else
                return sum;
        }
        else if (zero)
            sum += row[i];
    }
    return sum;
}

//task 9
void order(int arr[15]) {
    for (int i = 0; i < 14; ++i) {
        bool isSorted = true;
        for (int j = 0; j < 14 - i; ++j) {
            if ((arr[j] >= 0 && arr[j + 1] < 0) ||
                (arr[j] >= 0 && arr[j + 1] > arr[j]) ||
                (arr[j] < 0 && arr[j + 1] < 0 && arr[j] > arr[j + 1])) {
                std::swap(arr[j], arr[j + 1]);
                isSorted = false;
            }
        }
        if (isSorted) break;
    }
}

//task 10
void swap2 (double *a, double *b) {
    double temp = *b;
    *b = *a;
    *a = temp;
}

//task 11
void move(int** matr, int n, int m) {
    for (int j = 1; j < m; ++j) {
        for (int i = 0; i < n; ++i)
            std::swap(matr[i][0], matr[i][j]);
    }
}