#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    const int tam = 10;
    int i, vet[tam], aux;

    for (i=0;i<tam;i++)
    {
       vet[i] = rand()%26 + 30;
    }

    cout << "Vetor gerado: [";

    for (i=0;i<tam;i++)
    {
       cout << vet[i];

       if(i<tam-1)
        cout << ",";
    }

    cout << "]\n";

    for(i=0; i<tam/2; i++)
    {
        aux = vet[i];
        vet[i] = vet[tam-1-i];
        vet[tam-1-i] = aux;

    }

    cout << "Vetor invertido: [";

    for (i=0;i<tam;i++)
    {
       cout << vet[i];

       if(i<tam-1)
        cout << ",";
    }

    cout << "]\n";





    return 0;
}
