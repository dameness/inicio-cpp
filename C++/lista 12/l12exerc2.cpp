#include <iostream>
#include <ctime>
using namespace std;

#define tam 5

int main()
{
    int a[tam], b[tam], y[tam*2], i;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    cout << "Primeiro vetor: [";
    for(i=0; i<tam; i++)
    {
        a[i] = rand()%101;
        cout << a[i] << ", ";

    }
    cout << "]\n";

    cout << "Segundo vetor: [";
    for(i=0; i<tam; i++)
    {
        b[i] = rand()%101;
        cout << b[i] << ", ";

    }
    cout << "]\n";


    cout << "Vetor Y: [";
    for(i=0; i<tam; i++)
    {
        y[i] = a[i];
        cout << y[i] << ", ";

    }

    for(i=tam; i<tam*2; i++)
    {
        y[i] = b[i-tam];
        cout << y[i] << ", ";

    }
    cout << "]\n";





    return 0;
}
