#ifndef INTERCLASARE_H_INCLUDED
#define INTERCLASARE_H_INCLUDED

#include <iostream>
using namespace std;

// interclasare doi vectori ordonati in vectorul c

//    0   1   2   3   4   5   6
//a = 12, 28, 39, 58, 79,         da = 5 
//b = 10, 17, 48, 59, 80, 86, 89  db = 7
//
//i < da && j < db   a[i] <= b[j] c[dc] = a[i]  i ELSE  c[dc] = b[j]  j  dc  i < da  c[dc] = a[i]  i  dc  j < db  c[dc] = b[j]  j  dc
//0 < 5 da  0 < 7     12 <= 10 NU                        c[0] = 10    1  1  
//0 < 5 da  1 < 7     12 <= 17 DA c[1] = 12     1                        2
//1 < 5 da  1 < 7     28 <= 17 NU                        c[2] = 17    2  3
//1 < 5 da  2 < 7     28 <= 48 DA c[3] = 28     2                        4
//2 < 5 da  2 < 7     39 <= 48 DA c[4] = 39     3                        5
//3 < 5 da  2 < 7     58 <= 48 NU                        c[5] = 48    3  6
//3 < 5 da  3 < 7     58 <= 59 DA c[6] = 58     4                        7
//4 < 5 da  3 < 7     79 <= 59 NU                        c[7] = 59    4  8
//4 < 5 da  4 < 7     79 <= 80 DA c[8] = 79     5                        9
//5 < 5 nu                                                                   5 < 5 nu                     4 < 7  c[9] = 80      5  10
//                                                                                                        5 < 7  c[10] = 86     6  11
//                                                                                                        6 < 7  c[11] = 89     7  12
//                                                                                                        7 < 7 NU
//0   1   2   3   4   5   6   7   8   9   10   11
//10  12  17  28  39  48  58  59  79  80  86   89
void interclasare(int a[], int da, int b[], int db, int c[], int& dc)
{
    int i = 0;
    int j = 0;
    dc = 0;

    while (i < da && j < db)
    {
        if (a[i] <= b[j])
        {
            c[dc] = a[i];
            i++;
        }
        else
        {
            c[dc] = b[j];
            j++;
        }
        dc++;
    }

    while (i < da)
    {
        c[dc] = a[i];
        i++;
        dc++;
    }

    while (j < db)
    {
        c[dc] = b[j];
        j++;
        dc++;
    }
}

void afisare(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void copiaza(int sursa[], int n, int dest[])
{
    for (int i = 0; i < n; i++)
        dest[i] = sursa[i];
}

// sortare crescatoare pt vectorii copiati
void sortare(int v[], int dim)
{
    bool sortat = false;
    while(sortat == false)
    {
        sortat = true;
        for(int i = 0; i < dim - 1; i++)
        {
            if(v[i] > v[i+1])
            {
                int aux = v[i];
                v[i] = v[i+1];
                v[i + 1] = aux;
                sortat = false;
            }
        }
    }
}



void unesteNeordonati(int a[], int da, int b[], int db, int c[], int& dc)
{
    int x[100], y[100];
    copiaza(a, da, x);
    copiaza(b, db, y);

    sortare(x, da);
    sortare(y, db);

    interclasare(x, da, y, db, c, dc);
}
void sol2()
{
    int a[100] = {7, 1, 9};
    int b[100] = {4, 2};
    int c[200], dc;
    unesteNeordonati(a, 3, b, 2, c, dc);
    afisare(a, 3);
    afisare(b, 2);
    afisare(c, dc);
}

#endif // INTERCLASARE_H_INCLUDED