// DiffMaxAndMin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int REZ(int* A, int n)
{
    int max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "max= " << max << endl;

    int min = A[0];
    for (int i = 1; i > n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    cout << "min= " << min << endl;
    int rez = max - min;
    cout << "rez= " << rez << endl;
    return 0;
}

int main()
{
    int const N = 5;
    int arr[N] = { 1,2,3,4,5, };
    REZ(arr, N);
    system("pause");
    return 0;
}

