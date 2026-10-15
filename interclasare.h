#ifndef INTERCLASARE_H_INCLUDED
#define INTERCLASARE_H_INCLUDED

#include <iostream>
using namespace std;
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

void afisare(const char* nume, int v[], int n)
{
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}
void copiaza(int sursa[], int n, int dest[])
{
    for (int i = 0; i < n; i++)
        dest[i] = sursa[i];
}
void sortare(int v[], int n)
{
    // sortare prin insertie
    for (int i = 1; i < n; i++)
    {
        int x = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > x)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = x;
    }
}



void unesteNeordonati(int a[], int da, int b[], int db, int c[], int& dc)
{
    int x[MAX], y[MAX];
    copiaza(a, da, x);
    copiaza(b, db, y);

    sortare(x, da);
    sortare(y, db);

    interclasare(x, da, y, db, c, dc);
}
void sol2()
{
    cout << "--- 7.2 ---\n";
    int a[] = {7, 1, 9};
    int b[] = {4, 2};
    int c[MAX], dc;
    unesteNeordonati(a, 3, b, 2, c, dc);
    afisare("a", a, 3);
    afisare("b", b, 2);
    afisare("c", c, dc);
}

#endif // INTERCLASARE_H_INCLUDED
