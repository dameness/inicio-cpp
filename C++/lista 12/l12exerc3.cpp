#include <iostream>
#include <ctime>
using namespace std;

#define tam 20
int main()
{
    int v[tam], i, contP=0, contI=0;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    cout << "Valores de V: ";
    for(i=0; i<tam; i++)
    {
        v[i] = rand()%101;

        if(v[i]%2==0)
            contP++;
        if(v[i]%2!=0)
            contI++;
        cout << v[i] << ", ";
    }

    int P[contP], I[contI];
    contP=0;
    contI=0;

    for(i=0; i<tam; i++)
    {
        if(v[i]%2==0)
        {
            P[contP] = v[i];
            contP++;
        }

        if(v[i]%2!=0)
        {
            I[contI] = v[i];
            contI++;
        }
    }

    cout << "\nPar: ";
    for(i=0; i<contP; i++)
    {
        cout << P[i] << ", ";
    }

    cout << "\nÍmpar: ";

    for(i=0; i<contI; i++)
    {
        cout << I[i] << ", ";
    }





    return 0;
}
