#ifndef SORTARE_SELECTIE_H_INCLUDED
#define SORTARE_SELECTIE_H_INCLUDED

#include "algoritmi.h"
#include <iostream>

// 4.1  Scrie o funcție care afi șează cele mai mici k valori din vector, în ordine crescătoare.
void primeleK(int v[], int dim, int k)
{
    sortareSelectie(v, dim);
    for(int i = 0; i < k; i++)
    {
        cout << v[i] << ' ';
    }
}
void sol41()
{
    int v[100] = {7, 2, 9, 4, 5};
    int dim = 5;
    primeleK(v, dim, 3);
}

// 4.2  Scrie o funcție care ordonează crescător vectorul după ultima cifră a fi ecărui număr.
int ordonareDupaUc(int v[], int dim)
{
    int aux[100];
    for(int i = 0; i < dim; i++)
    {
        aux[i] = v[i] % 10;
    }
    sortareSelectie(aux, dim);
    for(int i = 0; i < dim; i++)
    {
        cout << aux[i] << ' ';
    }
}
void sol42()
{
    int v[100] = {23, 41, 15, 32};
    int dim = 4;
    ordonareDupaUc(v, dim);
}
// 4.4  Scrie o funcție care afi șează valorile distincte din vector, ordonate crescător.
int afisareDistinceDescrescatoare(int v[], int dim)
{
    sortareSelectie(v, dim);
    for(int i = 0; i < dim; i++)
    {
        if(v[i] != v[i - 1])
        {
            cout << v[i] << ' ';
        }
    }
}
void sol44()
{
    int v[100] = {5, 2, 5, 7, 2};
    int dim = 5;
    afisareDistinceDescrescatoare(v, dim);
}

#endif // SORTARE_SELECTIE_H_INCLUDED
