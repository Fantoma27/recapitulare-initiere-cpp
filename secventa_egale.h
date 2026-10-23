#ifndef SORTARE_EGALE_H_INCLUDED
#define SORTARE_EGALE_H_INCLUDED

#include <iostream>
using namespace std;
//1
void ceaMaiLungaSecventaEgale(int v[], int d, int &start, int &lungime)
{
    start = -1;
    lungime = 0;
    int i, j;
    for(int i = 0; i < d; i++)
    {
        int j = i;
        while(j + 1 < d && v[j + 1] == v[i])
        {
            j++;
        }
        if(j - i + 1 > lungime)
        {
            start = i;
            lungime = j - i + 1;

        }
        i = j;
    }
}

//Scrie o funcție care întoarce lungimea celei
//mai lungi secvențe de elemente vecine egale.

void sol1()
{
    int v[100] = {5, 5, 1, 1, 1, 1, 2, 2};
    int d = 8;
    int start;
    int lungime;
    ceaMaiLungaSecventaEgale(v, d, start, lungime);
    cout << lungime;
}

int ceaMaiLungaSecventaVal(int v[], int d)
{
    int start = -1;
    int lungime = 0;
    int i, j, val;
    for(i = 0; i < d; i++)
    {
        j = i;
        while(j + 1 < d && v[j + 1] == v[i])
        {
            j++;
        }
        if(j - i + 1 > lungime)
        {
            start = i;
            lungime = j - i + 1;
            val = v[i];
        }
        i = j;
    }
    
    return val;
}

void sol2()
{
    int v[100] = {5, 5, 1, 1, 1, 2};
    int d = 6;
    cout << ceaMaiLungaSecventaVal(v, d);
}

int ceaMaiLungaSecventaContor(int v[], int d)
{
    int start = -1;
    int lungime = 0;
    int ct = 0;
    int i, j;
    for(i = 0; i < d; i++)
    {
        j = i;;
        while(j - 1 < d && v[j + 1] == v[i])
        {
            j++;
        }
        ct++;
        i = j;
    }
    cout << ct;
}

//Scrie o funcție care întoarce în câte secvențe de valori egale se împarte vectorul.
void sol3()
{
    int v[100] = {5, 5, 1, 1, 1, 2, 2, 3, 3, 3, 5, 7};
    int d = 12;
    ceaMaiLungaSecventaContor(v, d);

}

//Scrie o funcție care găsește cea mai lungă secvență 
//de elemente vecine strict crescătoare și întoarce poziția de început și lungimea.

int ceaMaiLungaSecventaCrescatoare(int v[], int d)
{
    int start = -1;
    int lungime = 0;
    int i, j;
    for(i = 0; i < d; i++)
    {
        j = i;
        while(j + 1 < d && v[j + 1] > v[j])
        {
            j++;
        }
        {
            if(j - i + 1 > lungime)
            {
                lungime = j - i + 1;
                start = i;
            }
        }
        i = j;
    }
    cout << "Pozitia " << start << ", lungimea " << lungime;
}

void sol4()
{
    int v[100] = {2, 7, 1, 3, 5, 9, 4};
    int d = 7;
    ceaMaiLungaSecventaCrescatoare(v, d);
}

//Scrie o funcție care întoarce lungimea celei mai 
//lungi secvențe de elemente vecine care au toate aceeași paritate.

void ceaMaiLungaSecventaAceeasiParitate(int v[], int d, int &start, int &lungime)
{
    start = -1;
    lungime = 0;
    int i, j;
    int paritate;
    for(i = 0; i < d; i++)
    {
        j = i;
        paritate = v[i] % 2;
        while(j + 1 < d && v[j + 1] % 2 == paritate)
        {
            j++;
        }
        if(j - i + 1 > lungime)
        {
            lungime = j - i + 1;
            start = i;
        }
        i = j;
    }
}

void sol5()
{
    int v[100] = {3, 7, 2, 4, 6, 5};
    int d = 6;
    int start, lungime;
    ceaMaiLungaSecventaAceeasiParitate(v, d, start, lungime);
    cout << lungime;
}
#endif // SORTARE_EGALE_H_INCLUDED