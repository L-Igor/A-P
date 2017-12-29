// Task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int FUN(int* A, int N, int b)
{
    int MAX = 0;
    int k = -1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0 && abs(A[i] - b) > MAX)
        {
            MAX = abs(A[i] - b);
            k = i;
        }
    }

    return k;
}

int main()
{
    int const n = 8;
    int a[n] = { 1,4,5,7,8,4,6,9 };
    int b = 8;
    int rez = FUN(a, n, b);
    cout << rez << endl;
    system("pause");
    return 0;
}

