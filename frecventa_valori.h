#ifndef FRECVENTA_VALORI_H_INCLUDED
#define FRECVENTA_VALORI_H_INCLUDED

#include <iostream>
using namespace std;
//1:Scrie o funcție care întoarce valoarea care apare de cele mai multe ori. La egalitate, o întoarce pe cea maimică. Elementele sunt între 0 și 100.
int celMaiFrecvent(int v[], int d) {
    int fr[105] = {0};
    
    for (int i = 0; i < d; i++) {
        fr[v[i]]++;
    }
    
    int maxAp = -1;
    int valoare = -1;
    
    for (int i = 0; i <= 100; i++) {
        if (fr[i] > maxAp) {
            maxAp = fr[i];
            valoare = i;
        }
    }
    
    return valoare;
}

void sol1() {
    int v[100] = {5, 5, 5, 2, 2, 7};
    int d = 6;
    
    cout << celMaiFrecvent(v, d);
}


//2:Scrie o funcție care afi șează, în ordine crescătoare, valorile care apar o singură dată în vector.
void unicatele(int v[], int d) {
    int fr[105] = {0};
    
    for (int i = 0; i < d; i++) {
        fr[v[i]]++;
    }
    
    for (int i = 0; i <= 100; i++) {
        if (fr[i] == 1) {
            cout << i << " ";
        }
    }
}

void sol2() {
    int v[100] = {5, 5, 3, 7, 7, 1};
    int d = 6;
    
    unicatele(v, d);
}

//3:Scrie o funcție care întoarce câte valori distincte are vectorul.
int valoriDiferite(int v[], int d) {
    int fr[105] = {0};
    
    for (int i = 0; i < d; i++) {
        fr[v[i]]++;
    }
    
    int contor = 0;
    for (int i = 0; i <= 100; i++) {
        if (fr[i] > 0) {
            contor++;
        }
    }
    
    return contor;
}

void sol3() {
    int v[100] = {5, 2, 5, 7, 2};
    int d = 5;
    cout << valoriDiferite(v, d) << endl;
}
//4:Scrie o funcție care întoarce prima valoare care apare a doua oară, parcurgând vectorul de la stânga ladreapta. Dacă nu există, întoarce -1.
int primaCareSeRepeta(int v[], int d) {
    int fr[105] = {0};
    
    for (int i = 0; i < d; i++) {
        fr[v[i]]++;
        if (fr[v[i]] == 2) {
            return v[i];
        }
    }
    
    return -1;
}

void sol4() {
    int v[100] = {5, 2, 7, 2, 5};
    int d = 5;
    
    cout << primaCareSeRepeta(v, d);
}
//5:Scrie o funcție care întoarce valoarea care apare de mai mult de jumătate din numărul de elemente, sau -1dacă nu există.
int majoritar(int v[], int d) {
    int fr[105] = {0};
    
    for (int i = 0; i < d; i++) {
        fr[v[i]]++;
    }
    
    for (int i = 0; i <= 100; i++) {
        if (fr[i] > d / 2) {
            return i;
        }
    }
    
    return -1;
}

void sol5() {
    int v[100] = {3, 3, 4, 3, 3};
    int d = 5;
    
    cout << majoritar(v, d);
}

#endif