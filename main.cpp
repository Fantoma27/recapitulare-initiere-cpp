#include "parcurgerea-vectoriilor.h"
using namespace std;
//EX 12: ??

int main()
{

    //2a
    int n, v[300];
    cin >> n;
    for(int i = 0; i <n; i++)
    {
        cin >> v[i];
    }

    int cifmin= 9;
    for(int i = 0; i < n; i++)
    {
        int aux = CIfraMinima(v[i]);
        if(aux < cifminn){
            cifminn = aux;
        }
    }
    cout << cifminn;

    return 0;
}
