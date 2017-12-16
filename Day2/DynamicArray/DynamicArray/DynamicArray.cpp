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
    // ���� ���������� ��������� �������
    int N = 0;
    cout << "Input N: ";
    cin >> N;

    // ��������� ������ ��� N ��������� �������
    int* Arr;
    Arr = new int[N];
    //int* Arr = new int[N];
    // ���������� �������
    for (int i = 0; i < N; i++)
    {
        cout << "Input A[" << i << "]: ";
        cin >> Arr[i];
    }

    // ����� �������
    // ������� 1
    cout << "Arr = { ";
    for (int i = 0; i < N; i++)
    {
        cout << Arr[i] << ", ";
    }
    cout << "}" << endl;

    // ������� 2
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

    // �����-���� ����������� � ��������. ��������, ����� ��������/���������, ���������� � �.�.
    cout << "Max = " << MAX(Arr, N)<<endl;
    cout << "Min = " << MIN(Arr, N)<<endl;
    int rez = REZ(Arr, N);
    cout << "rez = " << rez << endl;

    delete[] Arr;   // ������������� ������ �������

    system("pause");
    return 0;
}

