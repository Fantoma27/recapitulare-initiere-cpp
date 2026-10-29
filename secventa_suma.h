#ifndef SORTARE_EGALE_H_INCLUDED
#define SORTARE_EGALE_H_INCLUDED

#include <iostream>
using namespace std;

// 1:Scrie o funcție care spune dacă există o secvență de elemente vecine cu o sumă dată și, dacă da, de undeîncepe și cât e de lungă. Elementele sunt pozitive.

bool existaSecventaSuma(int v[], int d, int s, int& start, int& lungime) {
    for (int i = 0; i < d; i++) {
        int suma = 0;
        for (int j = i; j < d; j++) {
            suma = suma + v[j];
            if (suma == s) {
                start = i;
                lungime = j - i + 1;
                return true;
            }
        }
    }
    return false;
}

void sol1() {
    int v[100] = {12, 10, 15, 7, 17};
    int d = 5;
    int s = 32;
    int start = -1;
    int lungime = 0;
    
    if (existaSecventaSuma(v, d, s, start, lungime) == true) {
        cout << "pozitia " << start << " , lungimea " << lungime;
    } else {
        cout << "nu exista";
    }
}
//2:Aceeași cerință, dar vectorul poate conține și numere negative
bool existaSecventaNeg(int v[], int d, int s, int& start, int& lungime) {
    for (int i = 0; i < d; i++) {
        int suma = 0;
        for (int j = i; j < d; j++) {
            suma = suma + v[j];
            if (suma == s) {
                start = i;
                lungime = j - i + 1;
                return true;
            }
        }
    }
    return false;
}

void sol2() {
    int v[100] = {4, -2, 3, 1, -5, 6};
    int d = 6;
    int s = 6;
    int start = -1;
    int lungime = 0;
    
    if (existaSecventaNeg(v, d, s, start, lungime)) {
        cout << "pozitia " << start << " , lungimea " << lungime;
    } else {
        cout << "nu exista";
    }
}

//3: Scrie o funcție care găsește cea mai scurtă secvență de elemente vecine cu o sumă dată.
void ceaMaiScurta(int v[], int d, int s, int& start, int& lungime) {
    start = -1;
    lungime = 99999;

    for (int i = 0; i < d; i++) {
        int suma = 0;
        for (int j = i; j < d; j++) {
            suma = suma + v[j];
            if (suma == s) {
                int lungimeCurenta = j - i + 1;
                if (lungimeCurenta < lungime) {
                    lungime = lungimeCurenta;
                    start = i;
                }
            }
        }
    }
    if (start == -1) {
        lungime = 0;
    }
}

void sol3() {
    int v[100] = {1, 2, 3, 4, 2, 4};
    int d = 6;
    int s = 6;
    int start = -1;
    int lungime = 0;
    
    ceaMaiScurta(v, d, s, start, lungime);
    
    if (start != -1) {
        cout << "pozitia " << start << " , lungimea " << lungime;
    } else {
        cout << "nu exista";
    }
}

//4: Scrie o funcție care întoarce câte secvențe de elemente vecine au o sumă dată.
int cateSecvente(int v[], int d, int s) {
    int contor = 0;
    
    for (int i = 0; i < d; i++) {
        int suma = 0;
        for (int j = i; j < d; j++) {
            suma = suma + v[j];
            if (suma == s) {
                contor++;
            }
        }
    }
    return contor;
}

void sol4() {
    int v[100] = {1, 2, 3, 4, 2, 4};
    int d = 6;
    int s = 6;
    cout << cateSecvente(v, d, s);
}


//5:  Scrie o funcție care întoarce cea mai mare sumă a trei elemente vecine.
int sumaTreiVecine(int v[], int d) {
    int maxim = -9999;

    for (int i = 0; i <= d - 3; i++) {
        int suma = v[i] + v[i+1] + v[i+2];
        if (suma > maxim) {
            maxim = suma;
        }
    }
    return maxim;
}


void sol5() {
    int v[100] = {2, 9, 1, 8, 3};
    int d = 5;

    int rezultat = sumaTreiVecine(v, d);
    cout << rezultat;
}
#endif