// DiffMaxAndMin.cpp : Defines the entry point for the console application.
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
    int const N = 5;
    int Arr[N] = { 1,2,3,4,5 };
    int rez = REZ(Arr, N);
    cout << "rez= " << rez << endl;

    system("pause");
    return 0;
}

