#ifndef POZITIE_SECVENTA_H_INCLUDED
#define POZITIE_SECVENTA_H_INCLUDED

#include <iostream>
using namespace std;



//Scrie o funcție care spune dacă toate elementele celui 
//de-al doilea vector apar în primul, în aceeași ordine
//dar nu neapărat unul lângă altul.

//ex : v = {1, 4, 21 32, 7,12,9}//     y1 = {1, 4, 7, 9}
//     y2 = {1, 7, 4, 9}
//  a={1,4,7,9}
//  a==y1 sau a==y2

//functie ce verifica daca un element exista in vector
bool existaElement(int v[], int d, int elem)
{
    for(int i = 0; i < d; i++)
    {
        if(v[i] == elem)
        {
            return true;
        }
    }
    return false;
}


//functie ce creaza un vector cu elementele comune

void creareVector(int v[], int d, int y[], int dy, int x[], int & dx)
{
    dx=0;
    for(int i = 0; i < d; i++)
    {
        if(existaElement(y,dy,v[i])&&!existaElement(x,dx,v[i])){
            x[dx]=v[i];
            dx++;
        }
      
    }
}

void afisare(int v[], int d)
{
    for(int i = 0; i < d; i++)
    {
        cout << v[i] << ' ';
    }
}


//functie ce verifica daca doi vectori sunt egali
bool egalitateVectori(int v[], int d, int y[], int dy)
{
    if(d != dy)
    {
        return false;
    }
    for(int i = 0; i < d; i++)
    {
        if(existaElement(y, dy, v[i]) == false)
        {
            return false;
        }
    }
    return true;
}


void solutie(){

    //existaElement Verificare
    int v[100] = {8, 5, 8, 5, 2, 3};
    int y[100] = {8, 2, 3};
    int z[100] = {3, 5};
    int d = 6;
    int dy = 3;
    int dz = 2;
    int x[100];
    int dx;
    creareVector(v, d, y, dy, x, dx);

    afisare(x,dx);
    if(egalitateVectori(y, dy, x, dx) == true)
    {
        cout << "adevarat";

    }
    else
    {
        cout << "fals";
    }




    // if(existaElement(v, d, elem) == true)
    // {
    //     cout << "exista";
    // }
    // else
    // {
    //     cout << "nu exista";
    // }

    //creareElement Verificare
    /*int v[100] = {8, 5, 8, 5, 2, 3};
    int y[100] = {3, 5};
    int x[100];
    int d = 6;
    int dy = 2;
    int dx;
    creareVector(v, d, y, dy, x, dx);
    afisare(x, dx);*/

    // //egalitateVectori Verificare
    // int v[100] = {1, 4, 7, 9, 2, 9};
    // int y[100] = {1, 4, 7, 9, 2};
    // int d = 6;
    // int dy = 5;
    // if(egalitateVectori(v, d, y, dy) == true)
    // {
    //     cout << "sunt egale";
    // }
    // else
    // {
    //     cout << "nu sunt egale";
    // }
}

//5:Primești doi vectori. Scrie o funcție care spune dacă au exact aceleași elemente, în aceeași ordine.

void sol5()
{
    int v[100] = {1, 4, 7, 9, 2};
    int y[100] = {1, 4, 7, 9, 2};
    int z[100] = {1, 4, 7};
    int d = 5;
    int dy = 5;
    int dz = 3;
    if(egalitateVectori(v, d, z, dz) == true)
    {
        cout << "adevarat";
    }
    else
    {
        cout << "fals";
    }
}






#endif