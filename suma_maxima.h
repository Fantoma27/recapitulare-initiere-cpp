#ifndef SUMA_MAXIMA_H_INCLUDED
#define SUMA_MAXIMA_H_INCLUDED

#include <iostream>
using namespace std;
//1:Scrie o funcție care întoarce cea mai mare sumă a unei secvențe de elemente vecine, plus poziția de începutși lungimea ei.

int sumaMaxima(int v[], int d, int& start, int& lungime) {
    int maxim = -999999;
    start = -1;
    lungime = 0;
    
    for (int i = 0; i < d; i++) {
        int suma = 0;
        for (int j = i; j < d; j++) {
            suma = suma + v[j];
            if (suma > maxim) {
                maxim = suma;
                start = i;
                lungime = j - i + 1;
            }
        }
    }
    return maxim;
}

void sol1() {
    int v[100] = {-4, 1, -5, 1, 4, -2, 2, 3, -4};
    int d = 9;
    int start;
    int lungime;

    int suma = sumaMaxima(v, d, start, lungime);
    cout << "suma " << suma << " , pozitia " << start << " , lungimea " << lungime;
}

//2:Scrie o funcție care întoarce cea mai mică sumă a unei secvențe de elemente vecine.
int sumaMinima(int v[], int d) {
    int minim = 9999;
    
    for (int i = 0; i < d; i++) {
        int suma = 0;
        for (int j = i; j < d; j++) {
            suma = suma + v[j];
            if (suma < minim) {
                minim = suma;
            }
        }
    }
    return minim;
}

void sol2() {
    int v[100] = {-4, 1, -5, 1, 4, -2, 2, 3, -4};
    int d = 9;
    
    cout << sumaMinima(v, d);
}

//3:Scrie o funcție care întoarce cea mai mare sumă a unei secvențe de exact k elemente vecine.
int sumaMaxExactK(int v[], int d, int k) {
    int maxim = -9999;
    
    for (int i = 0; i <= d - k; i++) {
        int suma = 0;
        for (int j = 0; j < k; j++) {
            suma = suma + v[i + j];
        }
        if (suma > maxim) {
            maxim = suma;
        }
    }
    return maxim;
}

void sol3() {
    int v[100] = {2, 9, 1, 8, 3};
    int d = 5;
    int k = 3;
    
    cout << sumaMaxExactK(v, d, k);
}

//4:Scrie o funcție care întoarce cea mai mare sumă a unei secvențe de elemente vecine care începe pe primapoziție.
int sumaMaxDinCapat(int v[], int d) {
    int maxim = -999999;
    int suma = 0;
    
    for (int i = 0; i < d; i++) {
        suma = suma + v[i];
        if (suma > maxim) {
            maxim = suma;
        }
    }
    return maxim;
}

void sol4() {
    int v[100] = {3, -2, 5, -8, 4};
    int d = 5;
    
    cout << sumaMaxDinCapat(v, d);
}

//5:Scrie o funcție care compară suma primei jumătăți a vectorului cu suma celei de-a doua și întoarce 1, 2 sau 0dacă sunt egale
int jumatateMaiGrea(int v[], int d) {
    int suma1 = 0;
    int suma2 = 0;
    int mijloc = d / 2;
    
    for (int i = 0; i < mijloc; i++) {
        suma1 = suma1 + v[i];
    }
    
    for (int i = mijloc; i < d; i++) {
        suma2 = suma2 + v[i];
    }
    
    if (suma1 > suma2) {
        return 1;
    } else if (suma2 > suma1) {
        return 2;
    } else {
        return 0;
    }
}

void sol5() {
    int v[100] = {3, -2, 5, -8, 4, 6};
    int d = 6;
    
    cout << jumatateMaiGrea(v, d);
}

//
#endif // SORTATE_BULE_H_INCLUDED
