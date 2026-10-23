#ifndef MUNTE_VALE_H_INCLUDED
#define MUNTE_VALE_H_INCLUDED

#include <iostream>
using namespace std;

void sortareInterval(int v[], int start, int finish)
{
    bool sortat = false;
    while (sortat != true)
    {
        sortat = true;
        for (int i = start; i <= finish - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                sortat = false;
            }
        }
    }
}
void sortareIntervalDescrescator(int v[], int start, int finish)
{
    bool sortat = false;
    while (sortat != true)
    {
        sortat = true;
        for (int i = start; i <= finish - 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                sortat = false;
            }
        }
    }
}

void sortareMunte(int v[], int d, int varf)
{
    sortareInterval(v, 0, varf);
    sortareIntervalDescrescator(v, varf, d - 1);
}

void sortareVale(int v[], int d, int varf)
{
    sortareIntervalDescrescator(v, 0, varf);
    sortareInterval(v, varf, d - 1);
}

// verific daca urca pana la varf si dupa coboara
void eMunte(int v[],int n)
{
    if (n < 3)
    {
        cout << "false";
        return;
    }
    int i = 0;

    while (i < n - 1 && v[i] < v[i +1])
    {
        i++;
    }
    if (i == 0 || i == n - 1)
    {
        cout << "false";
        return;
    }
    while (i < n - 1&& v[i]> v[i+1])
    {
        i++;
    }

    if (i == n - 1)
        cout << "true";
    else
        cout << "false";
}



void eVale(int v[], int n)
{
    if (n < 3)
    {
        cout << "false";
        return;
    }
    int i = 0;
    while (i < n - 1 && v[i] > v[i + 1])
    {
        i++;
    }
    if (i == 0 || i == n - 1)
    {
        cout << "false";
        return;
    }
    while (i < n - 1 && v[i] < v[i + 1])
    {
        i++;
    }
    if (i == n - 1)
        cout << "true";
    else
        cout << "false";
}

void undeVarf(int v[], int n)
{
    int pozMax = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > v[pozMax])
        {
            pozMax = i;
        }
    }
    cout << pozMax;
}

void faMunte(int v[], int n, int varf)
{
    sortareMunte(v, n, varf);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void cateVarfuri(int v[], int n)
{
    int numarVarfuri = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
        {
            numarVarfuri++;
        }
    }
    cout << numarVarfuri;
}

#endif // MUNTE_VALE_H_INCLUDED