#include <iostream>
#include "tasks.h"

int main() {

    //task1
    std::cout << "Task 1" << std::endl;
    int a = 1;
    int b = 2;

    swap(&a, &b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl << std::endl;;


    //task 2
    std::cout << "Task 2" << std::endl;

    int n = 0;
    std::cout << "Введите количество элементов: " << std::endl;
    std::cin >> n;
    int array[n];

    std::cout << "Введите элементы массива: " << std::endl;
    for (int i = 0; i < n; i++)
        std::cin >> array[i];

    int *ptr2 = &array[0];
    int *ptr21 = &array[n - 1];
    swap(ptr2, ptr21);

    for (int i = 0; i < n; i++)
        std::cout << array[i] << " ";

    std::cout << std::endl << std::endl;


    //task3
    std::cout << "Task 3" << std::endl;

    double **p = nullptr;
    double value = 2;
    double *ptr = new double; // динамическое выделение памяти под объект типа double
    delete ptr;
    ptr = &value; // передаем указателю адрес переменной value;
    p = &ptr; // передаем указателю адрес указателя ptr;

    std::cout << "Значение value: " << **p << std::endl << std::endl;


    //task4
    std::cout << "Task 4" << std::endl;

    double temp4;
    int k = 0;
    double arr[12];

    //заполнение массива
    for (int i = 0; i < 12; i++)
        std::cin >> arr[i];

    //сортировка
    for (int i = 0; i < 12 - 1; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (arr[i] < arr[j]) {
                temp4 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp4;
                k++;
            }
        }
    }

    //Вывод массива и кол-ва перестановок
    for (double number : arr)
        std::cout << number << " ";
    std::cout << "Число перестановок при сортировке: " << k << std::endl << std::endl;


    //task5
    std::cout << "Task 5" << std::endl;

    const int size1(8);
    int arr1[size1] = { 8, -6, -1, 2, 4, 7, -3, -5 };  //arr2[size], i, j, k;

    std::cout << "Отсортированный массив 1: " << std::endl;
    sort(arr1, size1);

    const int size2(9);
    int arr2[size2] = { -4, 3, -8, 9, -5, 1, -2, 6, -7 };

    std::cout << "Отсортированный массив 2: " << std::endl;
    sort(arr2, size2);

    const int size3(7);
    int arr3[size3] = { -9, 1, 4, -8, -6, 2, -3};

    std::cout << "Отсортированный массив 3: " << std::endl;
    sort(arr3, size3);

    std::cout << std::endl;


    //task 6
    std::cout << "Task 6" << std::endl;

    double temp6;
    int p6 = 0;
    double arr6[14];

    //заполнение массива
    for (int i = 0; i < 14; i++)
        std::cin >> arr6[i];

    //сортировка
    for (int i = 0; i < 7; i++)
    {
        temp6 = arr6[i];
        arr6[i] = arr6[7 + i];
        arr6[7 + i] = temp6;
        p6++;
    }

    //Вывод массива и кол-ва перестановок
    for (double number : arr6)
        std::cout << number << " ";
    std::cout << "Число перестановок при сортировки: " << p6 << std::endl << std::endl;


    //task 7
    std::cout << "Task 7" << std::endl;

    const int size7(7);
    int arr7[size1] = {5, 2, 6, 7, -8, 3};

    int kol = 0;

    for (int i = 0; i < size7-1; i++) {
        if (i == 0 && arr7[i] < arr7[i + 1]) {
            kol++;
        }
        else if (i > 0 && i < size7-1 && arr7[i] < arr7[i - 1] && arr7[i] < arr7[i + 1]) {
            kol++;
        }
        else if (i == size7-1 && arr7[i] < arr7[i - 1]) {
            kol++;
        }
    }

    std::cout << "Количество локальных минимумов = " << kol << std::endl << std::endl;


    //task 8
    int matrix[5][4] = { {0, 2, 3, 0},
                         {4, 0, 6, 0},
                         {0, 8, 0, 9},
                         {0, 0, 11, 12},
                         {13, 0, 0, 15} };
    std::cout << "Исходная матрица: ";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << "Суммы элементов, заключенных между двумя нулями: ";
    for (int i = 0; i < 5; ++i)
        std::cout << "Строка " << i << ": " << sum(matrix[i], 4) << std::endl << std::endl;


    //task 9
    int arr9[15];
    std::cout << "Введите массив из 15 элементов: ";
    for (int i = 0; i < 15; ++i)
        std::cin >> arr9[i];

    order(arr9);

    for (int i = 0; i < 15; ++i)
        std::cout << arr9[i] << " ";
    std::cout << std::endl << std::endl;


    //task 10
    std::cout << "Task 10" << std::endl;

    int d = 0;
    std::cout << "Введите количество элементов массива: " << std::endl;
    std::cin >> d;
    double arr10[d];
    double arr101[d];

    std::cout << "Введите элементы первого массива: " << std::endl;
    for (int i = 0; i < d; i++)
        std::cin >> arr10[i];

    std::cout << "Введите элементы второго массива: " << std::endl;
    for (int i = 0; i < d; i++)
        std::cin >> arr101[i];

    double *max10 = nullptr;
    double *max101 = nullptr;

    for (int i = 0; i < d; i++)
        if (&arr10[i] > max10)
            max10 = &arr10[i];

    for (int i = 0; i < d; i++)
        if (&arr101[i] > max101)
            max101 = &arr101[i];

    swap2(max10, max101);

    for (double number : arr10)
        std::cout << number << " ";
    for (double number : arr101)
        std::cout << number << " ";

    std::cout << std::endl << std::endl;


    // task 11
    int** matr11 = new int* [5];

    std::cout << "Введите исходную матрицу 5x5: ";
    for (int i = 0; i < 5; ++i) {
        matr11[i] = new int[5];
        for (int j = 0; j < 5; ++j)
            std::cin >> matr11[i][j];
    }

    move(matr11, 5, 5);

    std::cout << "После сдвига столбцов матрицы на 1 вправо: " << std::endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j)
            std::cout << matr11[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << std::endl;

    
    //task 15
    std::cout << "Task 15" << std::endl;

    int Paskal[100], n15, i;
    std::cout << "Введите количество строк: "<<std::endl;
    std::cin >> n15;

    for (int i = 0; i <= n15; i++) {
        if (i == 0) {
            Paskal[i] = 1;
        }
        else {
            Paskal[i] = 0;
        }
    }

    for (int j = 0; j <= n15; j++) {
        for (i = j; i >= 1; i--)
            Paskal[i] = Paskal[i - 1] + Paskal[i];
        for (i = 1; i <= n15; i++)
            if (Paskal[i])
                std::cout << "   " << Paskal[i];
        std::cout << std::endl << std::endl;
    }

    return 0;
}
