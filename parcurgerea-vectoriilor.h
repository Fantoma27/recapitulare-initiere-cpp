#ifndef PARCURGEREA-VECTORIILOR_H_INCLUDED
#define PARCURGEREA-VECTORIILOR_H_INCLUDED
#include<iostream>
using namespace std;



//functie ce afiseaza eleemntele unui vector de numere intregi

int afisareaElemVect(int v[],int dim)
{
    int n;
    for(int i = 0; i <dim; i++)
    {
        cout<<v[i]<<" ";
    }
}


void sol1(){

int v[100] = {12, 32, 43, 54, 15, 27, 38, 41, 50, 63, 67, 72, 79, 84, 88, 91, 95, 10, 22, 35, 49, 58, 61, 74};

int dim=20;

afisareaElemVect(v,20);


}

#endif // PARCURGEREA-VECTORIILOR_H_INCLUDED
