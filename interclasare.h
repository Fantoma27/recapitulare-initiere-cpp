#ifndef INTERCLASARE_H_INCLUDED
#define INTERCLASARE_H_INCLUDED

#include <iostream>
using namespace std;

// interclasare doi vectori ordonati in vectorul c
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