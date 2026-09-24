#include "while-ex.h"
//EX 12: ??

int main()
{
    int n;
    int ct = 0;
    int aux1;
    int aux2;
    cin >> n;
    if(n == 0)
    {
        cout << "Cmmdc: 0" << endl << "Prime: 0";
    }
    aux1 = n;
    while(n != 0)
    {
        cin >> n;
        if(estePrim(n))
        {
            ct++;
        }
        aux2 = n;
        int cmmdc2 = cmmdc(aux1, aux2);
        aux1 = cmmdc2;
    }
    cout << cmmdc;

    return 0;
}
 