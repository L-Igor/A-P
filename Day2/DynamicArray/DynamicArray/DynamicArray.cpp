// DynamicArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int MAX(int* a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int MIN(int* a, int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int REZ(int* a, int n)
{
    int max = MAX(a, n);
    int min = MIN(a, n);
    int rez = max - min;    // int rez = MAX(a, n) - MIN(a, n);
    return rez;
}

int main()
{
    // ввод количества элементов массива
    int N = 0;
    cout << "Input N: ";
    cin >> N;

    // выделение памяти под N элементов массива
    int* Arr;
    Arr = new int[N];
    //int* Arr = new int[N];
    // заполнение массива
    for (int i = 0; i < N; i++)
    {
        cout << "Input A[" << i << "]: ";
        cin >> Arr[i];
    }

    // вывод массива
    // вариант 1
    cout << "Arr = { ";
    for (int i = 0; i < N; i++)
    {
        cout << Arr[i] << ", ";
    }
    cout << "}" << endl;

    // вариант 2
    cout << "Arr = { ";
    if (N >= 1)
    {
        cout << Arr[0];
    }
    for (int i = 1; i < N; i++)
    {
        cout << ", " << Arr[i];
    }
    cout << " }" << endl;

    // какие-либо манипуляции с массивом. Например, поиск минимума/максимума, сортировка и т.д.
    cout << "Max = " << MAX(Arr, N)<<endl;
    cout << "Min = " << MIN(Arr, N)<<endl;
    int rez = REZ(Arr, N);
    cout << "rez = " << rez << endl;

    delete[] Arr;   // высвобождение памяти массива

    system("pause");
    return 0;
}

