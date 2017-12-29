// ConsoleApplication13.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;


//задание 7.
/*int Sravnenie(int* a, int n)
{
int i = 0; int sum_1 = 0; int sum_2 = 0;
if (n % 2 == 1)
{
n--;
a[(n / 2)] = 0;
}

for (int i = 0; i < n; i++)
{
if (i < n / 2)
{
sum_1 += a[i];
}
if (i > n / 2)
{
sum_2 += a[i];
}
}
if (sum_1 > sum_2)
{
return 1;
}
else
{
return 0;
}
}

int main()
{
int const N = 9;
int A[N] = { 1,5,6,3,6,7,4,2,6 };
int rez = Sravnenie(A, N);
cout << "REZ= " << rez << endl;
system("pause");
return rez;
}
*/

//Написать программу,которая находит разниццу между элементами стящими на четных и нечетных позициях(я повторить хочу)
/*int Rez(int* a, int n)
{
int CHET = 0; int NECHET = 0; int REZ = 0;
for (int i = 0; i < n; i++)
{
if (i % 2 == 0)
{
CHET += a[i];
}
else
{
NECHET += a[i];
}
}
REZ = CHET - NECHET;
return REZ;
}
int main()
{
int const N = 9;
int A[N] = { 1,5,6,3,6,7,4,2,6 };
int rez = Rez(A, N);
cout << "REZ= " << rez << endl;
system("pause");
return rez;
}*/

//Задача 8
/*int Posledovatel(int* A, int N, int K)
{
int Count = 1; int MaxCount = 1;
for (int i = 1; i < N; i++)
{
if (A[i] == K)
{
i++;
}
else
{
if (Count > MaxCount)
{
A[i] == K;
}
Count = 0;
}
}
return MaxCount;
}
int main()
{
int K = 6;
int const N = 15;
int A[N] = { 1,5,6,6,6,6,6,6,3,6,6,7,4,2,6 };
int rez = (A, N, K);
cout << "REZ= " << rez << endl;
system("pause");
return rez;
}*/

//Задача 9
/*int Posledovatelnost(int* A, int N)
{
int Count = 0; int MaxCount = 0;
for (int i = 1; i < N; i++)
{
if (A[i - 1] <= A[i])
{
Count++;
}
else
{
if (Count > MaxCount)
{
MaxCount = Count;
}
Count = 0;
}
}
return MaxCount + 1;
}
int main()
{
int K = 6;
int const N = 15;
int A[N] = {0,2,3,4,1,1,0,5,6,7,8,9,3,2,0 };
int rez = (A, N, K);
cout << "REZ= " << rez << endl;
system("pause");
return rez;
}*/

//Задача 12(НЕ РАБОТАЕТ)
/*void Fun12(int** A, int N)
{
int t = 0;
for (int i = 0; i < N; i++)
{
for (int j = i; j < N; j++)
{
t = A[i][j];
A[i][j] = A[j][i];
A[j][i] = t;
}
}
}

void PrintMattrix(int** A, int N)
{
for (int i = 0; i < N; i++)
{
for (int j = 0; j < N; j++)
{
cout << setw(4) << A[i][j] << " ";
}
cout << endl;
}
}

int main()
{
int const N = 3;
int** A = new int*[N];
for (int i = 0; i < N; i++)
{
A[i] = new int[N];
}

for (int i = 0; i < N; i++)
{
for (int j = 0; j < N; j++)
{
A[i][j] = (i + 1) * N + (j + 1);
}
}

//int A[N][N] =
//{
//	{ 1, 5, 6 } ,
//	{ 3, 7, 8 },
//	{ 9, 2, 4 }
//};

cout << "Source matrix" << endl;
PrintMattrix((int**)A, N);

Fun12((int**)A, N);

cout << "Destination matrix" << endl;
PrintMattrix((int**)A, N);

for (int i = 0; i < N; i++)
{
delete[] A[i];
}
delete[] A;

system("pause");
return 0;
}
*/

//Задачи 14
/*void Fun14(int** A, int N)
{
int Max = 0;
Max = A[0][0];
for (int i = 0; i < N; i++)
{
for (int j = 0; j < N; j++)
{
if (A[i][j] > Max)
{
Max = A[i][j];
}
}
}
cout << "Max= " << Max << endl;
for (int i = 0; i < N; i++)
{
for (int j = 0; j < N; j++)
{
if (A[i][j] == 0)
{
A[i][j] = Max;
}
}
}
}
void PrintMatrix(int** A, int N)
{
for (int i = 0; i < N; i++)
{
for (int j = 0; j < N; j++)
{
cout <<setw(4) <<A[i][j] << " ";  //setw-выравнивание матрицы
}
cout << endl;
}
}

int main()
{
int const N = 3;
int** A = new int*[N];
for (int i = 0; i < N; i++)
{
A[i] = new int[N];
}

for (int i = 0; i < N; i++)
{
for (int j = 0; j < N; j++)
{
A[i][j] = i * (j * 5);
}
}
cout << "Isxot" << endl;
PrintMatrix(A, N);
Fun14(A, N);
cout << "Rez" << endl;
PrintMatrix(A, N);
for (int i = 0; i < N; i++)
{
delete[] A[i];
}
delete[] A;
system("pause");
return 0;
//int* B = new int[N];
//delete[] A;
}*/

//Задача 13
/*int Fun13(int** A, int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i][i];
    }
    return sum;
}

void PrintMatrix(int** A, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(4) << A[i][j] << " ";  //setw-выравнивание матрицы
        }
        cout << endl;
    }
}

int main()
{
    int const N = 3;
    int** A = new int*[N];
    for (int i = 0; i < N; i++)
    {
        A[i] = new int[N];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            A[i][j] = i + (j * 5);
        }
    }

    cout << "Isxot" << endl;
    PrintMatrix(A, N);
    int sum = 0;
    sum = Fun13(A, N);
    cout << "Summa = " << sum << endl;

    for (int i = 0; i < N; i++)
    {
        delete[] A[i];
    }
    delete[] A;

    system("pause");
    return 0;
}*/


//Задача 16

/*void Fun16(char* A)
{
    int n = strlen(A);
    for (int i = 0; i < n / 2; i++)
    {
        int x = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = x;
    }
}

int main()
{
    //char A[] = "abcdfrew";
    char A[] = { 'a','b','c','d','f','r','e','w', '\0' };
    cout << A << endl;
    Fun16(A);
    cout << A << endl;

    system("pause");
    return 0;
}*/


//Задача 10
/*int fun8(int *a, int n)
{
    int col = 0;
    for (int i = 0; i < n; i++)
    {
        switch (a[i])
        {
            case 2:
                col++;
                break;
            case 4:
                col++;
                break;
            case 8:
                col++;
                break;
            case 16:
                col++;
                break;
            case 32:
                col++;
                break;
            case 64:
                col++;
                break;
        }

        if (a[i] == 2)
        {
            col++;
        }
        else if (a[i] == 4)
        {
            col++;
        }
        else if (a[i] == 8)
        {
            col++;
        }
        else if (a[i] == 16)
        {
            col++;
        }
        else if (a[i] == 32)
        {
            col++;
        }
        else if (a[i] == 64)
        {
            col++;
        }

        switch (a[i])
        {
            case 2:
            case 4:
            case 8:
            case 16:
            case 32:
            case 64:
                col++;
                break;
        }

        if (a[i] == 2 || a[i] == 4 || a[i] == 8 || a[i] == 16 || a[i] == 32 || a[i] == 64)
        {
            col++;
        }
    }
    return col;
}


//void fun15(char *c)
//{
//    char a = c[0];
//    for (int i = 1; i < strlen(c); i++)
//    {
//        char t = c[i];
//        c[i] = c[i - 1];
//        c[i - 1] = t;
//    }
//    c[strlen(c) - 1] = a;
//}

void fun15(char *c)
{
    char firstItem = c[0];
    for (int i = 0; i < strlen(c) - 1; i++)
    {
        c[i] = c[i + 1];
    }
    c[strlen(c) - 1] = firstItem;
}

int main()
{
    //char A[] = "abcdfrew";
    char A[] = { 'a','b','c','d','f','r','e','w', '\0' };
    cout << A << endl;
    fun15(A);
    cout << A << endl;

    system("pause");
    return 0;
}*/


//20 задача
//int fun18(char *c)
//{
//    int n = strlen(c), col = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (c[i] == c[i + 1])
//        {
//            for (int j = i; j < n; j++)
//            {
//                c[j] = c[j + 1];
//            }
//            n--;
//            col++;
//        }
//    }
//    return col;
//}

int fun18(char *c)
{
    char *a = c;
    char *b = c;
    int count = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        ++a;
        if (*a != *(a + 1))
        {
            ++b;
            *b = *a;
        }
        else
        {
            ++count;
        }
    }

    return count;
}

int main()
{
    char A[] = "abccccdffreeeeeeew";
    cout << A << endl;
    int rez = fun18(A);
    cout << A << endl;
    cout << "rez = " << rez << endl;

    system("pause");
    return 0;
}