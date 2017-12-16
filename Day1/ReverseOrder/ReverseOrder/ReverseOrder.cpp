// ReverseOrder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void fun(int *a, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int x = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = x;
    }
}

void fun2(int *a, int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int x = a[i];
        a[i] = a[j];
        a[j] = x;
    }
}

void InitArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i] = 2 * i + 1;
    }
}

void PrintArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}



int main()
{
    const int N = 10;
    int Array[N];

    InitArray(Array, N);
    cout << "Source array" << endl;
    PrintArray(Array, N);
    cout << endl;

    cout << "Reverse array - 1" << endl;
    fun(Array, N);
    PrintArray(Array, N);
    cout << endl;

    InitArray(Array, N);
    cout << "Reverse array - 2" << endl;
    fun2(Array, N);
    PrintArray(Array, N);
    cout << endl;

    system("pause");
    return 0;
}

