#ifndef CAUTARE_BINARA_H_INCLUDED
#define CAUTARE_BINARA_H_INCLUDED

#include "algoritmi.h"
#include <iostream>

using namespace std;

int cautareBinara1(int v[], int dim, int key)
{
    int minn = 0;
    int maxx = dim - 1;
    while(minn <= maxx)
    {
        int mij = (minn + maxx) / 2;
        if(v[mij] == key)
        {
            return mij;
        }
        if(v[mij] < key)
        {
            minn = mij + 1;
        }
        if(v[mij] > key)
        {
            maxx = mij - 1;
        }
    }
    return -1;
}

//functie de cautare
int cautareInVector(int v[], int dim, int key)
{
    for(int i = 0; i < dim; i++)
    {
        if(v[i] == key)
        {
            return i;
        }
    }
    return -1;
}

//2.1 Scrie o funcție care spune dacă o valoare apare în vector, folosind căutarea binară. Vectorul primit nu esteneapărat ordonat.
bool gasireValoare(int v[], int dim, int x)
{
    if(cautareBinara(v, dim, x) != -1)
    {
        return true;
    }
    return false;
}
void sol21()
{
    int v[100] = {30, 12, 45, 7, 19};
    int dim = 4;
    cout << gasireValoare(v, dim, 20);
}


//2.2   Primești doi vectori. Scrie o funcție care întoarce câte valori din al doilea se găsesc și în primul.
int cateSeRegasesc(int v1[], int v2[], int dim1, int dim2)
{
    int ct = 0;
    for(int i = 0; i < dim2; i++)
    {
        if(cautareInVector(v1, dim1, v2[i]) != -1)
        {
            ct++;
        }
    }
    return ct;
}

void sol22()
{
    int v1[100] = {5, 10, 14, 19};
    int v2[100] = {10, 7, 19};
    int dim1 = 4;
    int dim2 = 3;
    cout << cateSeRegasesc(v1, v2, dim1, dim2);
}

//2.3 Primești un vector ordonat crescător și o valoare. Scrie o funcție care întoarce poziția pe care ar trebui inserată valoarea ca vectorul să rămână ordonat.

//v = [3, 7, 12, 18, 25, 31, 44, 58, 72, 89]
//
//functie ce returneaza pozitia de insearat
int pozitiaDeInserat(int v[], int dim, int key)
{
    for(int i = 0; i < dim; i++)
    {
        if(v[i] > key)
        {
            return i;
        }
    }
}

void solpozitiadeinserat()
{
    int v[100] = {3, 7, 12, 18, 25, 31, 44, 58, 72, 89};
    int dim = 10;
    cout << pozitiaDeInserat(v, dim, 10);
}

int inserareInVector(int v[], int&d, int poz, int elem)
{
    for(int i = d; i > poz; i--)
    {
        v[i] = v[i - 1];
    }
    v[poz] = elem;
    d++;
}

void sol23()
{
    int v[100] = {2, 5, 9, 14};
    int dim = 4;
    int valoareDeInserat = 7;
    int poz = pozitiaDeInserat(v, dim, valoareDeInserat);
    inserareInVector(v, dim, poz, valoareDeInserat);
    cout << poz;
}

//2.4  Primești un vector ordonat crescător și o valoare x. Scrie o funcție care întoarce cea mai mică valoare din vector mai mare sau egală cu x, sau -1 dacă nu există.
int ceaMaiMicaValoare(int v[], dim, key)
{
    cautareBinara(v, dim, key);
    for(int i = 0; i < dim; i++)
    {
        if(v[i] > )
    }

}





#endif // CAUTARE_BINARA_H_INCLUDED
