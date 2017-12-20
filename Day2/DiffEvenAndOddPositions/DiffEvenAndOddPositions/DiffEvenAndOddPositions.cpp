// DiffEvenAndOddPositions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int REZ(int* A, int N)
{
    int CH = 0;
    int NECH = 0;
    int rez = 0;
    for (int i = 0; i < N; i + 2)
    {
        CH = CH + A[i];
    }
    for (int i = 1; i < N; i + 2)
    {
        NECH = NECH + A[i];
    }
    rez = CH - NECH;
    cout << "REZ= " << rez << endl;
    return 0;
}

int main()
{
    int const n = 5;
    int a[n] = { 2,4,6,7,8 };
    REZ(a, n);
    system("pause");
    return 0;
}
