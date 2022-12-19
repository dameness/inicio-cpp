#include <iostream>
#include <ctime>
using namespace std;

#define tam 7

int main()
{
    int v[tam], i, n, ntermos=0, contP=0, cont60=0;
    bool repete, ordenado;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
       do{
        cout << "Digite um termo do vetor: ";
        cin >> n;

        repete = false;

        for(i=0; i<ntermos; i++)
        {
            if(v[i]==n)
            {
                repete=true;
                cout << "Não são permitidos termos repitidos! Insira novamente!\n";
                system("pause");
                break;
            }
        }
        if(repete==false)
        {
            v[ntermos]=n;
            ntermos++;

            if(v[i]>60)
                cont60++;
            if(v[i]%2==0)
                contP++;
        }
        system("cls");
       }while(repete==true);
    }
        cout << "Vetor V: ";

        for (i=0;i<tam;i++)
        {
            cout << v[i] << ", ";
        }

        cout << "\nEste vetor tem " << cont60 << " termos maiores que 60!\n";

        int P[contP], aux;
        contP=0;

        for(i=0; i<tam; i++)
        {
            if(v[i]%2==0)
            {
                P[contP]=v[i];
                contP++;
            }
        }

        do{
            ordenado = true;

            // contP-1 por que estamos usando i+1 e ultrapassaria o tamanho do vetor(lixo de memoria e falha no programa)
            for (i=0;i<contP-1;i++)
            {
                if(P[i] <P [i+1])
                {
                    aux = P[i];
                    P[i] = P[i+1];
                    P[i+1] = aux;
                    ordenado=false;
                }
            }
        }while(ordenado==false);

        cout << "Vetor P(pares): ";

        for (i=0;i<contP;i++)
        {
            cout << P[i] << ", ";
        }





    return 0;
}
