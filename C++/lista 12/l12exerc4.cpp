#include <iostream>
#include <ctime>
using namespace std;

#define tam 20
int main()
{
    int v[tam], i, save;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    cout << "Valores de V: ";
    for(i=0; i<tam; i++)
    {
        v[i] = rand()%101;
        cout << v[i] << ", ";
    }

    cout << "\nValores de V invertidos: ";

    save = v[0];


    for(i=0; i<tam; i++)
    {
            v[i]=v[i+1];
    }

    v[tam] = save;

    for (i=0;i<tam;i++)
    {
        cout << v[i] << ", ";
    }




    return 0;
}
